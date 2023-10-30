int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // Write your code here.
    int n = prices.size();
    if(n<=1){
        return 0;
    }
    int minPrice = prices[0];
    int maxProfit=0;
    for(int i=1;i<n;i++)
    {
        if(prices[i]<minPrice)
        {
            minPrice=prices[i];
        }
        else if(prices[i]-minPrice>maxProfit)
        {
            maxProfit=prices[i]-minPrice;
        }
    }
    return maxProfit;   
}
