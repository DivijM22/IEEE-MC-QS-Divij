class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        const int n=nums.size();
        int sum=0,res=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum=max(nums[i],sum+nums[i]);
            res=max(res,sum);
        }
        return res;
    }
};
