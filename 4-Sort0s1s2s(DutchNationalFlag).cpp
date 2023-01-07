#include<iostream>
using namespace std;
void sort0s1s2s(int arr[], int size){
    int zeros=0,ones=0,twos=0,i=0;
    for(int i = 0; i < size; i++){
        if(arr[i]==0){
           zeros++;
        }
        else if(arr[i]==1){
            ones++;
        }
        else{
            twos++;
        }
    }
    for(int i = 0; i < size; i++){
        if(zeros!=0){
            arr[i] = 0;
            zeros--;
        }
        else if(ones!=0){
            arr[i] = 1;
            ones--;
        }
        else{
            arr[i] = 2;
            twos--;
        }
    }
}
void printArray(int arr[],int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {0,1,2,0,1,2,0,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,size);
    sort0s1s2s(arr,size);
    cout << "Array after sorting is ";
    printArray(arr,size);
}