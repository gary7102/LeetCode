class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];
        int maxProfit = 0;
        for(int i=1; i<prices.size(); i++){
            if(prices[i] - buyPrice > maxProfit){
                maxProfit = prices[i] - buyPrice;
            }
            if(prices[i] < buyPrice){
                buyPrice = prices[i];
            }
        }
        return (maxProfit>0)? maxProfit : 0;
    }
};
