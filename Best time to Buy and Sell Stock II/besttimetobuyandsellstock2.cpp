#include <iostream>
#include<climits>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = INT_MIN;
        int minprice = INT_MAX;
        int res = 0;
        bool check = false;
        int i=0;
        for(i=0;i<prices.size()-1;i++)
        {
            minprice = min(prices[i], minprice);
            profit = max(profit, prices[i]-minprice);
            if(prices[i] > prices[i+1])
            {
                res+=profit;
                profit = INT_MIN;
                minprice = INT_MAX;
                check = true;
            }
        }
        profit = max(profit, prices[i]-minprice);
        if(profit > 0)
            res+=profit;
        if(!check && profit > 0){
            res = profit;
        }
        return res;
    }
};