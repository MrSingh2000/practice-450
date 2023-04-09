#include <iostream>
using namespace std;

#define n 100

class queue
{
private:
    int *arr;
    int l, f;

public:
    queue()
    {
        arr = new int[n];
        l = -1;
        f = -1;
    }

    bool isEmpty()
    {
        if (l == f)
            return true;
        return false;
    }
    bool isFull()
    {
        if (l == n - 1)
            return true;
        return false;
    }

    void enqueue(int val)
    {
        if (isFull())
        {
            cout << "Queue is Full" << endl;
            return;
        }
        l++;
        arr[l] = val;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        f++;
        cout << "Element removed: " << arr[f] << endl;
    }

    int lastVal()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return arr[l];
    }

    int firstVal()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return arr[f + 1];
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        for (int i = f + 1; i <= l; i++)
            cout << arr[i] << ' ';
        cout << endl;
    }
};

int main()
{
    queue q;
    q.display();
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();

    return 0;
}