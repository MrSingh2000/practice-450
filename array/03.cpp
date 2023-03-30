#include <iostream>
#include <algorithm>
using namespace std;

// Note: answer by considering k as 1 indexing;
void kMaxMin(int arr[], int n, int k)
{
    sort(arr, arr+n);
    cout << "max: " << arr[k-1] << " min: " << arr[n - k-1] << endl;
}

int main()
{

    int arr[7] = {7, 10, 4, 3, 20, 5, 2};
    kMaxMin(arr, 7, 3);

    return 0;
}