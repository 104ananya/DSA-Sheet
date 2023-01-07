// SOLUTION 1

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        
        // count zeros
        int countZero = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                countZero ++;
            }
        }
        
        nums.erase(std::remove(begin(nums), end(nums), 0), end(nums));
        
        // int newsize = nums.size();
        
        // int space = n - newsize;
        
        while(countZero --){
            nums.push_back(0);
        }
        
    }
};

// SOLUTION 2

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    
	    int j = 0;
	    
	    for(int i = 0; i<n; i++){
	        
	        if(arr[i] != 0){
	            arr[j] = arr[i];
	            j++;
	        }
	    }
	    
	    for(int i = j; i<n; i++){
	        arr[i] = 0;
	    }
	}
};

// SOLUTION 3

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j = 0; j < nums.size(); j++){
            if( nums[j] != 0){
                swap(nums[j], nums[i]);
                i++;
            }
        } 
    }
};
