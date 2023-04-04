// Create Doubly Linked List to store Product details and implement
// Search operation to find particular product’s price using PID.
// Product data fields are: PID, PROD_NAME, PRICE.

#include <iostream>
using namespace std;

struct prdDet
{
    struct prdDet *prv;
    int pid;
    string pName;
    float price;
    struct prdDet *nxt;
};
struct prdDet *head = NULL;

void insert(int pid, string nm, float prc)
{
    struct prdDet *trvrs, *nNode = (struct prdDet *)malloc(sizeof(struct prdDet));
    nNode->pid = pid;
    nNode->pName = nm;
    nNode->price = prc;
    nNode->nxt = NULL;
    if (head == NULL)
    {
        head = nNode;
        nNode->prv = NULL;
        cout << "Node Inserted." << endl;
        return;
    }
    trvrs = head;
    while (trvrs->nxt != NULL)
        trvrs = trvrs->nxt;
    trvrs->nxt = nNode;
    cout << "Node Inserted." << endl;
}

void search(int pid)
{
    struct prdDet *trvrs;
    bool yn = true;
    trvrs = head;
    if (trvrs == NULL)
    {
        cout << "No Data." << endl;
    }
    else
    {
        while (trvrs->nxt != NULL)
        {
            if (trvrs->pid == pid)
            {
                cout << "item price is " << trvrs->price << endl;
                yn = false;
                return;
            }
            trvrs = trvrs->nxt;
        }
        if (yn)
            cout << "Customer Detail Not found." << endl;
    }
}

int main()
{
    insert(001, "Maggi", 14);
    insert(002, "Maggi", 14);
    insert(003, "Maggi", 14);
    insert(004, "Maggi", 14);
    insert(005, "Maggi", 14);
    search(004);
}