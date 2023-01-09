#include<bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[], int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i = 0; i < n; i++){
        currSum = max(currSum + arr[i], arr[i]);
        maxSum = max(currSum, maxSum);
    }
    return maxSum;
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << maxSubarraySum(arr,n);

}