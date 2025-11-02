class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1) return 0;
        int maxProfit=INT_MIN;
        int buyPrice=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            buyPrice=min(buyPrice,prices[i]);
            if(i>0)
                maxProfit=max(maxProfit,prices[i]-buyPrice);
        }
        return maxProfit;
    }
};
