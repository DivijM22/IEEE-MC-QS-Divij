class Solution {
public:
    int maxArea(vector<int>& nums) {
        const int n=nums.size();
        int l=0,r=n-1,side,area,maxArea=0;
        while(l<r)
        {
            side=min(nums[l],nums[r]);
            area=side*(r-l);
            maxArea=max(maxArea,area);
            if(nums[l]<nums[r]) l++;
            else r--;
        }
        return maxArea;
    }
};
