#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

void rotateByOne(int arr[], int n)
{
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
    print(arr, n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5] = {1, 2, 3, 4, 5};
    print(arr, 5);
    rotateByOne(arr, 5);
    return 0;
}