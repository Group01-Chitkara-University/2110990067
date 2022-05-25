// wirte the code to allote the no of pages to the student, the maxium no of pages alloted to the student is minimum.
#include <iostream>
using namespace std;

bool isPossible(int arr[], int m, int n, int mid)
{
    int studentcount = 1;
    int pagesum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            studentcount++;
            if (studentcount > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int PossibleAllocation(int arr[], int m, int n)
{
    // m  is the no.of the student.
    // n is the size of the array.
    int s = 0;
    int sum; //sum is search space in which my ans will be possible
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (isPossible(arr, m, n, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr [5] = {10,20,30,40,50};
    int m = 3;
    cout<<PossibleAllocation(arr , m , 5);
    return 0;
}