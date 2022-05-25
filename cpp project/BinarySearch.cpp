#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int search)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == search)
        {
            return mid;
        }
        if (arr[mid] < search)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
// ********************first occurence *****************

int FirstOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

// **********************************last occurence***********************

int LastOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

// ******************************total occuerence*******************************
int totalOcc(int arr[], int n, int key)
{
    int F = FirstOcc(arr, n, key);
    int l = LastOcc(arr, n, key);
    int total = (l - F) + 1;
    cout << total << endl;
}

int main()
{

    int even[8] = {1, 2, 3, 6, 6, 6, 7, 8};
    // int ans = BinarySearch(even, 8, 4);

    // cout << FirstOcc(even, 8, 6);
    // cout << endl;
    // cout << LastOcc(even, 8, 6);
    cout << endl;
    cout << totalOcc(even, 8, 6);
    // cout << ans;
    return 0;
}