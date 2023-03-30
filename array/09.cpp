#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int minDiffHeight(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0];

    int tempMin, tempMax;
    tempMin = arr[0];
    tempMax = arr[n - 1];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - k < 0)
            continue;
        tempMin = min(arr[0] + k, arr[i] - k);
        tempMax = max(arr[n - 1] - k, arr[i - 1] + k);
        ans = min(ans, tempMax - tempMin);
    }

    return ans;
}

int main()
{

    int arr[4] = {1, 5, 8, 10};
    cout << minDiffHeight(arr, 4, 2) << endl;
    return 0;
}