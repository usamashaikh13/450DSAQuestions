#include<iostream>
using namespace std;

void rotateAnArray(int arr[], int size){
    int temp = arr[size-1];
    for(int i = size; i>=0; i--){
         arr[i] = arr[i-1];
    }
    arr[0] = temp;
}
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] <<" ";
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    rotateAnArray(arr,size);
    printArray(arr,size);

}