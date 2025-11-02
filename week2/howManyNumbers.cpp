class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>copy(nums.begin(),nums.end());
        const int n=nums.size();
        sort(copy.begin(),copy.end());
        unordered_map<int,int>hashmap;
        for(int i=0;i<n;i++) 
            if(!hashmap.count(copy[i]))
                hashmap[copy[i]]=i;
        for(int i=0;i<n;i++)
            nums[i]=hashmap[nums[i]];
        return nums;
    }
};
