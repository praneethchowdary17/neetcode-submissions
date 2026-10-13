class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int smallest = prices[0];
        int maxProfit = 0;
        for (int i = 0; i < n; i++) {
            if (prices[i] < smallest) {
                smallest = prices[i];
            }
            if (prices[i] - smallest > maxProfit) {
                maxProfit = prices[i] - smallest;
            }
        }
        return maxProfit;
    }
};
