class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int len = nums.size();

        int i = len - 2;

        //DIP
        while(i>=0 && nums[i] >= nums[i+1]){
            i--;
        }

        //If DIP detected
        if(i>=0){

            int k = len - 1;

            while(nums[k] <= nums[i]){
                k--;
            }

            swap(nums[i], nums[k]);

            reverse(nums.begin() + (i+1), nums.end());
        }

        //DIP not detected
        else{
            sort(nums.begin(), nums.end());
        }

        
    }
};
