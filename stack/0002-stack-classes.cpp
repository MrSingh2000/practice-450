#include <iostream>
using namespace std;

#define n 100

class stack
{
private:
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        return false;
    }

    bool isFull()
    {
        if (top == n - 1)
            return true;
        return false;
    }

    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack is Full" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        top--;
    }

    int stackTop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr[top];
    }

    int stackBottom()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr[0];
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return;
        }

        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << endl;
    }
};

int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();

    return 0;
}