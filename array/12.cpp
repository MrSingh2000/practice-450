#include <iostream>
using namespace std;

// merge two sorted arrays without using extra space in sorted manner;

void merge(int a[], int n, int b[], int m, int ans[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            ans[k] = a[i];
            i++;
        }
        else
        {
            ans[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < n)
    {
        ans[k] = a[i];
        i++;
        k++;
    }
    while (j < m)
    {
        ans[k] = b[j];
        j++;
        k++;
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

int main()
{

    int arr1[4] = {1, 3, 4, 5};
    int arr2[4] = {2, 4, 6, 8};
    int arr3[8];
    merge(arr1, 4, arr2, 4, arr3);
    print(arr3, 8);

    return 0;
}