class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int maximum = 0;
        
        for(int i = 0; i < n; i++){
            maximum = max(maximum, arr[i]);
        }
        
        return maximum;
    }
};

