#include <iostream>
using namespace std;

// returns maximum sum possible
int kadaneAlgo(int arr[], int n)
{
    int maxSum = INT16_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum > maxSum)
            maxSum = currSum;
        if (currSum < 0)
            currSum = 0;
    }
    return maxSum;
}

int main()
{

    int arr1[5] = {1, 2, 3, -2, 5};
    int arr2[4] = {-1, -2, -3, -4};
    cout << kadaneAlgo(arr1, 5) << endl << kadaneAlgo(arr2, 4) << endl;

    return 0;
}