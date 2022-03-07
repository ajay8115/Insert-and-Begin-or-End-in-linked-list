
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    Node *insertAtBegining(Node *head, int x)
    {
        Node *begin = new Node(x);
        begin->next = head;
        head = begin;
        return head;
    }

    // Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)
    {
        Node *tail = new Node(x);

        if (head == NULL)
        {
            head = tail;
            return head;
        }

        Node *cur = head;

        while (cur->next != NULL)
        {
            cur = cur->next;
        }

        cur->next = tail;

        return head;
    }
};