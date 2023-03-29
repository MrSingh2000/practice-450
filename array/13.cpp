// Kadane Algo
#include <iostream>
using namespace std;

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

    int arr[5] = {1, 2, 3, -2, 5};
    cout << kadaneAlgo(arr, 5);

    return 0;
}