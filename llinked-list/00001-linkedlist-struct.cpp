#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void display(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << ' ';
        temp = temp->next;
    }
    cout << endl;
}

struct Node *insertAtFirst(struct Node *head, int val)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = val;
    ptr->next = head;
    return ptr;
}

struct Node *insertAtLast(struct Node *head, int val)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = val;
    ptr->next = NULL;

    struct Node *p = head;

    while (head->next != NULL)
        head = head->next;

    head->next = ptr;
    return p;
}

struct Node *insertAtIndex(struct Node *head, int val, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = val;
    struct Node *p = head;

    int i = 0;
    while (i != index - 2)
    {
        head = head->next;
        i++;
    }

    ptr->next = head->next;
    head->next = ptr;
    return p;
}

struct Node *deleteAtFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *deleteAtLast(struct Node *head)
{
    struct Node *ptr = head;
    while (head->next->next != NULL)
        head = head->next;
    struct Node *temp = head->next;
    head->next = NULL;
    free(temp);
    return ptr;
}

struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *ptr = head;
    int i = 0;
    while (i != index - 2)
    {
        head = head->next;
        i++;
    }

    struct Node *temp = head->next;
    head->next = head->next->next;
    free(temp);

    return ptr;
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;

    display(head);
    head = insertAtFirst(head, 9);
    display(head);
    head = insertAtLast(head, 12);
    display(head);
    head = insertAtIndex(head, 11, 3);
    display(head);
    head = deleteAtIndex(head, 3);
    display(head);
    head = deleteAtFirst(head);
    display(head);
    head = deleteAtLast(head);
    display(head);

    return 0;
}