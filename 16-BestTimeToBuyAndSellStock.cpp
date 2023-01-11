#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxPrice = 0;
        for(int i = 0; i < prices.size(); i++){
            minPrice = min(minPrice, prices[i]);
            maxPrice = max(maxPrice, prices[i] - minPrice);
        }
        return maxPrice;
    }
};
int main(){
    vector<int> prices = {7,1,5,3,6,4};
    Solution ob;
    cout <<ob.maxProfit(prices);
}