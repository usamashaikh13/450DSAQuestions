#include<bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr+n);
        int ans = arr[n-1] - arr[0];
        
        int tempmin = arr[0];
        int tempmax = arr[n-1];
        
        for(int i = 1; i < n; i++){
            if(arr[i] >= k){
                
                
            tempmin = min(arr[0] + k, arr[i] - k);
            
            tempmax = max(arr[i-1] + k, arr[n-1] - k);
            
            ans = min(ans, tempmax - tempmin);
            }
         
        }
          return ans;
} 
int main(){
    int n = 5,k=3;
    int arr[] = {3,9,12,16,20};
    cout <<getMinDiff(arr,5,k);
    return 0;
}