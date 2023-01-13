#include<bits/stdc++.h>
using namespace std;
int maxProduct(vector<int> nums){
    int ans = nums[0];
    int maxproduct = 1, minproduct = 1;
    for(int i = 0; i < nums.size();i++){
        if(nums[i]<0){
            swap(maxproduct,minproduct);
        }
        maxproduct = max(maxproduct*nums[i],nums[i]);
        minproduct = min(minproduct*nums[i],nums[i]);
        ans = max(ans,maxproduct);
    }
    return ans;
}
int main(){
    vector<int> nums= {2,3,-2,4};
    cout << maxProduct(nums);
    return 0;
}