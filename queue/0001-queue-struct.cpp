#include <iostream>
using namespace std;

struct Queue
{
    int size, f, l;
    int *arr;
};

bool isFull(struct Queue *q)
{
    if (q->l == q->size - 1)
        return true;
    return false;
}

bool isEmpty(struct Queue *q)
{
    if (q->l == q->f)
        return true;
    return false;
}

void enqueue(struct Queue *q, int val)
{
    if (isFull(q))
    {
        cout << "Queue is Full" << endl;
        return;
    }
    q->l++;
    q->arr[q->l++] = val;
}

void dequeue(struct Queue *q)
{
    if(isEmpty(q))
    {
        cout << "Queue is Empty" << endl;
        return;
    }
    q->f++;
    cout << "Element removed is: " << q->arr[q->f] << endl;
}

int lastVal(struct Queue *q)
{
    return isEmpty(q) ? -1 : q->arr[q->l];
}

int firstVal(struct Queue *q)
{
    return isEmpty(q) ? -1 : q->arr[q->f + 1];
}

void display(struct Queue *q)
{
    struct Queue *temp = q;
    while(temp->f != temp->l)
    {
        cout << temp->arr[temp->f+1] << ' ';
        temp->f++;
    }
}

main()
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->size = 100;
    q->f = -1;
    q->l = -1;
    q->arr = (int *)malloc(sizeof(int) * q->size);

    return 0;
}