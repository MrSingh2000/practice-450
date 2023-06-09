#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int s = 0, e = n-1;
    while(s <= e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++; e--;
    }
}

void print(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

int main()
{

    int arr[3] = {1, 2, 3};
    reverse(arr, 3);
    print(arr, 3);

    return 0;
}