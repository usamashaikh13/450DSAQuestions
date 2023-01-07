#include<bits/stdc++.h>
using namespace std;
int KthMax(int arr[], int N, int K){
    sort(arr,arr+N);
    return arr[K-1];
}
int main(){
    int arr[] = { 12, 3, 5, 7, 19 };
    int N = sizeof(arr) / sizeof(arr[0]), K = 2;
    cout <<"Kth Max Element is "<< KthMax(arr,N,K);

}