struct Node *deleteCycle(struct Node *head)
{
    // use the same algo used to check cycle to reach the point where both ptrs at same node

    // initialising slow and fast node as represents hear/rabbit and turtle
    struct Node *slow = head;
    struct Node *fast = head;

    // in while loop the condition is checked where cycle in list is not present
    while (fast != NULL && fast->next != NULL)
    {
        // moving slow ptr 1 node and fast ptr 2 nodes
        slow = slow->next;
        fast = fast->next->next;

        // when both reaches the same node , loop breaks giving as 2 ptrs at that point
        if (slow == fast)
        {
            break;
        }
    }

    // now shifting the fast ptr to head
    fast = head;

    // moving both pointer one node each till both next's are same
    while (fast->next != slow->next)
    {
        fast = fast->next;
        slow = slow->next;
    }

    return slow;
}
// useless comment