//Right rotation
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
struct node *head;
int sz = 0;

void traverse(node *head)
{
    while (head != NULL)
    {
        cout << head->data;
        if (head->next != NULL)
            cout << " -> ";
        head = head->next;
        sz++;
    }
    cout << endl;
}

void insert(int itm)
{
    struct node *ptr, *trvrs;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        return;
    }
    else
    {
        ptr->data = itm;
        ptr->next = NULL;
        if (head == NULL)
        {
            head = ptr;
        }
        else
        {
            trvrs = head;
            while (trvrs->next != NULL)
                trvrs = trvrs->next;
            trvrs->next = ptr;
        }
    }
}

void rotate(node *head, int rt)
{
    struct node *trvr, *tHead;
    for (int i = 0; i < rt; i++)
    {
        /* code */

        trvr = head;
        while (trvr->next != NULL)
            trvr = trvr->next;
        trvr->next = head;
        tHead = head;
        head = trvr->next->next;
        tHead->next = NULL;
    }
    traverse(head);
}

int main()
{
    int elN, rtn, itm;
    cout << "How many elements u want to insert?" << endl;
    cin >> elN;
    for (int i = 0; i < elN; i++)
    {
        cout << "Enter Element : ";
        cin >> itm;
        insert(itm);
    }
    traverse(head);
    cout << "How many time you want to rotate?" << endl;
    cin >> rtn;
    rotate(head, rtn);
    return 0;
}