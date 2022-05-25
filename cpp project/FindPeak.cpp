#include<iostream>
using namespace std;

int PeakValue(int arr[] , int size){
    int s = 0;
    int e = size - 1;
    int mid = s+(e - s)/2;
    int ans;
    while (s<e)
    {
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }
        else
        {
            e = mid;
        }

        mid = s + (e - s)/2;
    }
    return s;
    
}
int main(){

    int arr[8] = {1,2,3,4,6,2,1};
    cout<<PeakValue( arr , 7)<< endl;
    return 0;
}