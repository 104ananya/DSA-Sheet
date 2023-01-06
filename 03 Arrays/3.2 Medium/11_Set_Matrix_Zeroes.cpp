class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        bool rowcheck = false;
        bool colcheck = false;

        //first row check
        for(int j = 0; j < col; j++){
            if(matrix[0][j] == 0){
                rowcheck = true;
            }
        }

        //first col check
        for(int i = 0; i < row; i++){
            if(matrix[i][0] == 0){
                colcheck = true;
            }
        }

        // traverse matrix
        for(int i = 1; i < row; i++){
            for(int j = 1; j < col; j++){
                if(matrix[i][j] == 0){
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        //change the values
        for(int i = 1; i < row; i++){
            for(int j = 1; j < col; j++){
                if(matrix[0][j] == 0 || matrix[i][0] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        //to see if first row needs to be changed
        if(rowcheck){
            for(int j = 0; j<col; j++){
                matrix[0][j] = 0;
            }
        }

        //to see if first col needs to be changed
        if(colcheck){
            for(int i = 0; i<row; i++){
                matrix[i][0] = 0;
            }
        }

    }
};
