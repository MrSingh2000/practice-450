#include <iostream>
#include <cmath>
using namespace std;

int minimumJumps(int arr[], int n)
{
    if(n <= 1)
        return 0;
    if(arr[0] == 0)
        return -1;
    
    int jump = 1, steps = arr[0], maxReach = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(i == n-1)
            return jump;
        maxReach = max(maxReach, i + arr[i]);
        steps--;
        if(steps == 0)
        {
            jump++;
            if(i >= maxReach)
                return -1;
            steps = maxReach - i;
        }
    }
    return -1;
}

int main()
{

    int arr[11] = {1, 0, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout << minimumJumps(arr, 11) << endl;

    return 0;
}