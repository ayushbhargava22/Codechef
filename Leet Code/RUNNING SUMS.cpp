class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> arr;
        int sum =0;
        int len = nums.size();
        for(int i=0;i<len;i++)
        {
            for(int j=0;j<=i;j++)
            {
                sum= sum + nums[j];
            }
            arr.push_back(sum);
            sum = 0;
        }
        return arr;
    }
};