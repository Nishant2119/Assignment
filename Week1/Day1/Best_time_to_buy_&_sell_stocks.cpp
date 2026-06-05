class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int i=0;
        int maxprofit=0;
        int profit;
        for(int j =0;j<prices.size();i++)
        {
            profit = prices[j] - prices[i];
            if(profit>maxprofit) 
            {
                maxprofit = profit;
            }
            if(profit<0) 
            {
                i=j;
            }
            j++;
        }
        return maxprofit ;
    }
};