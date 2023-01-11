#include<bits/stdc++.h>
using namespace std;
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int, int> m;
        int count = 0;
        for(int i = 0; i < n; i++){
            if(m.find(k-arr[i])!=m.end()){
                count += m[k-arr[i]];
            }
            m[arr[i]]++;
        }
        return count;
    }
};
int main(){
    int arr[] = {1,5,7,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    Solution ob;
    cout << ob.getPairsCount(arr,size,k);
    return 0;
}