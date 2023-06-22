// problem -> https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    void maxProfitFinder(vector<int>& prices,int i, int& minPrice, int& maxProfit){
        //base case
        if(i == prices.size()){
            return;
        }

        //one case
        if(prices[i] < minPrice) minPrice = prices[i];
        int today_profit = prices[i] - minPrice;
        if (today_profit > maxProfit) maxProfit = today_profit;
        // recursive call
        maxProfitFinder(prices,i+1,minPrice,maxProfit);
    }
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = INT_MIN;
        maxProfitFinder(prices,0,minPrice,maxProfit);
        return maxProfit;
    }
};
