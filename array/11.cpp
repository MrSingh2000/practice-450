#include <iostream>
using namespace std;

int repeated(int arr[], int n)
{
    int tortoise = arr[0], hare = arr[0];
    do{
        tortoise = arr[tortoise];
        hare = arr[arr[hare]];
    }while(tortoise != hare);

    // finding the entrance of the cycle
    tortoise = arr[0];
    while(tortoise != hare)
    {
        tortoise = arr[tortoise];
        hare = arr[hare];
    }

    return hare;
}

int main()
{

    int arr[5] = {1, 3, 4, 2, 2};
    cout << repeated(arr, 5) << endl;

    return 0;
}