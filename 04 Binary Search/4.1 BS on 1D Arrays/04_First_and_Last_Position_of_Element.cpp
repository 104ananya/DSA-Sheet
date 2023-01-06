class Solution {
public:

    int startPos(vector<int> &nums, int target){
        int start = 0;
        int end = nums.size() - 1;
        int first = -1;

        while(start <= end){
            int mid = start + (end - start)/2;

            if(target == nums[mid]){
                first = mid;
                end = mid - 1;
            }
            else if(target > nums[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }

        return first;
    }

    int endPos(vector<int> &nums, int target){
        int start = 0;
        int end = nums.size() - 1;
        int last = -1;

        while(start <= end){
            int mid = start + (end - start)/2;

            if(target == nums[mid]){
                last = mid;
                start = mid + 1;
            }
            else if(target > nums[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }

        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};

        ans[0] = startPos(nums, target);
        ans[1] = endPos(nums, target);

        return ans;
    }
};
