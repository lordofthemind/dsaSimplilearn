// create a doublyLinkedList to store given values.
//Also create another DoublyLinkedList to store factorial of value of previous DLL.
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void traverse(Node *head)
{
    while (head != NULL)
    {
        cout << head->data;
        if (head->next != NULL)
            cout << " <> ";
        head = head->next;
    }
    cout << endl;
}

void traverseRev(Node *head)
{
    while (head->next != NULL)
        head = head->next;
    while (head->prev != NULL)
    {
        cout << head->data;
        if (head->prev != NULL)
            cout << " <> ";
        head = head->prev;
    }
    cout << head->data;
    cout << endl;
}

void insert(Node **head, int itm)
{
    Node *nNode = new Node();
    nNode->data = itm;
    nNode->next = NULL;
    if (*head == NULL)
    {
        *head = nNode;
        nNode->prev = NULL;
        return;
    }
    Node *last = *head;
    while (last->next != NULL)
        last = last->next;
    last->next = nNode;
    last->next->prev = last;
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}


void insrtFctrl(Node *head, Node **fctHead)
{
    while (head != NULL)
    {
        int fct = factorial(head->data);
        insert(fctHead, fct);
        head = head->next;
    }
}


int main()
{
    Node *head = NULL;
    insert(&head, 0);
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    insert(&head, 5);
    cout << "Original Doubly Linked list." << endl;
    traverse(head);
    cout << "Original Doubly Linked list in reverse." << endl;
    traverseRev(head);
    //Operations on factorial list!
    Node *fctHead = NULL;
    insrtFctrl(head, &fctHead);
    cout << "Factorial Doubly Linked list." << endl;
    traverse(fctHead);
    cout << "Factorial Doubly Linked list in reverse." << endl;
    traverseRev(fctHead);
    return 0;
}