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
    Node *head;

public:
    LinkedList(){
        head = NULL;
    }
    
};

int main()
{

    return 0;
}