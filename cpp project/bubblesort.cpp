#include<iostream>
using namespace std;

void BubbleSort(int arr[] , int n){
    for (int i =0; i<n; i++){
        for (int j =0; j<n-i; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}

void print(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i];
    }
}
int main(){
    int arr[5]={2,5,4,1,3};
    BubbleSort(arr , 5);
    print(arr , 5);

    return 0;
}