// Brute Force
int maxProfit = 0;
int n = prices.size();

for (int i = 0; i < n - 1; i++) { // Buy day
    for (int j = i + 1; j < n; j++) { // Sell day
        maxProfit = max(maxProfit, prices[j] - prices[i]);
    }
}

return maxProfit;



// Optimal solution using (Kadane’s Algorithm

int mp=0,bestBuy=prices[0];
for(int i=1;i<prices.size();i++){
    if(prices[i]>bestBuy){
        mp=max(mp,prices[i]-bestBuy);
    }
    bestBuy=min(bestBuy,prices[i]);
}
return mp;




