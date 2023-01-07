#include<iostream>
using namespace std;

void MoveAllNegativeNos(int arr[],int size){
    int j = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] < 0){
            if(i!=j){
                swap(arr[i],arr[j]);
            j++;
            }
        }
    }
}
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,size);
    MoveAllNegativeNos(arr,size);
    cout << "Array after Moving Negative numbers is ";
    printArray(arr,size);
}