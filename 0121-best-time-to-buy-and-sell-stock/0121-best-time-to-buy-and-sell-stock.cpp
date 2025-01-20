class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bp= prices[0];
        int mx=0;
        int profit=0;
        int sz= prices.size();
        for(int i=1;i<sz;i++){
            if(prices[i]<bp)bp= prices[i];
            mx= max(profit,prices[i]-bp);
            profit=mx;

               
        }        
        return mx;
    }
};