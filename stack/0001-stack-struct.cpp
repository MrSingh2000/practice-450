#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

bool isEmpty(struct Node *ptr)
{
    if (ptr == NULL)
        return true;
    return false;
}

void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << ' ';
        ptr = ptr->next;
    }
}

struct Node *push(struct Node *sp, int val)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = val;
    ptr->next = sp;
    return ptr;
}

struct Node *pop(struct Node *sp)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr = sp->next;
    return ptr;
}

int length(struct Node *ptr)
{
    struct Node *temp = ptr;
    int l = 0;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}

int peek(struct Node *ptr, int pos)
{
    struct Node *temp = ptr;
    if (pos <= 0 || pos > length(ptr))
    {
        cout << "Position not available" << endl;
        return -1;
    }
    int i = 0;
    while (i != pos - 1)
    {
        i++;
        temp = temp->next;
    }
    return temp->data;
}

int stackTop(struct Node *ptr)
{
    struct Node *p = ptr;
    while (p->next != NULL)
    {
        p = p->next;
    }
    return p->data;
}

int stackBottom(struct Node* ptr){
    return ptr->data;
}


int main()
{
    struct Node *top = (struct Node *)malloc(sizeof(struct Node));
    top = NULL;

    return 0;
}