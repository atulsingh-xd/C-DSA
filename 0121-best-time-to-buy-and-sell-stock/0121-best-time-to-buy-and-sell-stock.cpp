class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int i,n=prices.size(), maxProfit =0, bestBuy=prices[i];
       for(i=0;i<n;i++){
        if(prices[i]>bestBuy){
            maxProfit=max(maxProfit,prices[i]-bestBuy);
        }
        bestBuy=min(bestBuy, prices[i]);
       }
        return maxProfit;
    }
};