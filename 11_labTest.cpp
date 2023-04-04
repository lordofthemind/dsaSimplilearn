// Create a SLL for the given set of numbers. And then rotate
// the list as per the given no. of rotations towards right side.
// Input: 5, 6, 2, 3, 10, 11, 9, 8
// No. of Rotations: 2
// Output: 8, 9, 5, 6, 2, 3, 10, 11

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *nxt;
};
struct node *head;

void traverse()
{
    struct node *trvrs;
    trvrs = head;
    while (trvrs->nxt != NULL)
    {
        cout << trvrs->data;
        if (trvrs->nxt != NULL)
            cout << " -> ";
        trvrs = trvrs->nxt;
    }
    cout << trvrs->data << endl;
}

void insert(int vl)
{
    struct node *nNode, *trvrs;
    nNode = (struct node *)malloc(sizeof(struct node));
    nNode->data = vl;
    nNode->nxt = NULL;
    if (head == NULL)
    {
        head = nNode;
        cout << "Data Inserted!!" << endl;
        return;
    }
    else
    {
        trvrs = head;
        while (trvrs->nxt != NULL)
            trvrs = trvrs->nxt;
        trvrs->nxt = nNode;
        cout << "Data Inserted!!" << endl;
    }
}

node *rtRotate(int rt)
{
    if (head == NULL || head->nxt == NULL || rt == 0)
        return head;

    struct node *temp, *trvrs = head;
    int len = 1;
    while (trvrs->nxt != NULL)
    {
        len++;
        trvrs = trvrs->nxt;
    }
    int rtn = rt % len;
    if (rtn == 0)
        return head;

    trvrs->nxt = head;
    int cnt = 0;
    while (cnt < len - rtn)
    {
        trvrs = trvrs->nxt;
        cnt++;
    }
    head = trvrs->nxt;
    trvrs->nxt = NULL;
    return head;
}

int main()
{
    insert(0);
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert(9);
    traverse();
    rtRotate(2);
    traverse();
    return 0;
}