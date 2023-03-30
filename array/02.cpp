#include <iostream>
using namespace std;

void getMinMaxLinearSearch(int arr[], int n)
{
    int maxx = INT16_MIN, minn = INT16_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxx)
            maxx = arr[i];
        if (arr[i] < minn)
            minn = arr[i];
    }
    cout << "Max: " << maxx << " Min: " << minn << endl;
}

int main()
{

    int arr[5] = {3, 5, 1, 4, 9};
    getMinMaxLinearSearch(arr, 5);

    return 0;
}