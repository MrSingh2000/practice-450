#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }

    Node()
    {
        data = 0;
        next = NULL;
    }
};

class LinkedList
{
private:
    bool isEmpty()
    {
        if (head == NULL)
            return true;
        return false;
    }

public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    }

    int size()
    {
        Node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Linked List is Empty" << endl;
            return;
        }
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << ' ';
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAtFirst(int val)
    {
        Node *ptr = new Node(val);
        ptr->next = head;
        head = ptr;
    }

    void insertAtLast(int val)
    {
        Node *ptr = new Node(val);
        if (isEmpty())
        {
            head = ptr;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = ptr;
    }

    void insertAtIndex(int index, int val)
    {
        Node *ptr = new Node(val);
        Node *temp = head;
        int i = 0;
        while (i != index - 2)
        {
            temp = temp->next;
            i++;
        }
        ptr->next = temp->next;
        temp->next = ptr;
    }

    void deleteAtFirst()
    {
        if (isEmpty())
        {
            cout << "Linked List is Empty" << endl;
            return;
        }
        Node *ptr = head;
        head = head->next;
        free(ptr);
    }

    void deleteAtLast()
    {
        if (isEmpty())
        {
            cout << "Linked List is Empty" << endl;
            return;
        }
        Node *ptr;
        Node *temp = head;
        while (temp->next->next != NULL)
            temp = temp->next;
        ptr = temp->next;
        temp->next = NULL;
        free(ptr);
    }

    void deleteAtIndex(int index)
    {
        if (isEmpty())
        {
            cout << "Linked List is Empty" << endl;
            return;
        }
        int i = 0;
        Node *ptr;
        Node *temp = head;
        while (i != index - 2)
        {
            temp = temp->next;
            i++;
        }
        ptr = temp->next;
        temp->next = temp->next->next;
        free(ptr);
    }
};
