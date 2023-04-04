// Create Singly Linked List to store Bank Customers details and implement Search
// operation to find the account balance of a Customer using his account number.
// Customer data fields are: Acc_No, Customer_Name, Balance_Amt
#include <iostream>
using namespace std;

struct bnkCust
{
    int accNo;
    string cName;
    float bAmt;
    struct bnkCust *next;
};
struct bnkCust *head = NULL;

void traverse()
{
    struct bnkCust *current;
    current = head;
    if (current == NULL)
    {
        cout << "No Data." << endl;
    }
    else
    {
        cout << "Bank Customer Details are as follows...." << endl;
        while (current != NULL)
        {
            cout << "Account No :" << current->accNo << endl;
            cout << "Customer Name :" << current->cName << endl;
            cout << "Account Balance :" << current->bAmt << endl;
            current = current->next;
        }
    }
}

void insert(int ano, string nm, float bal)
{
    struct bnkCust *trvrs, *nNode = (struct bnkCust *)malloc(sizeof(struct bnkCust));
    nNode->accNo = ano;
    nNode->cName = nm;
    nNode->bAmt = bal;
    nNode->next = NULL;
    if (head == NULL)
    {
        head = nNode;
        cout << "Node inserted!" << endl;
        return;
    }
    trvrs = head;
    while (trvrs->next != NULL)
        trvrs = trvrs->next;
    trvrs->next = nNode;
    cout << "Node inserted!" << endl;
}

void search(int ano)
{
    struct bnkCust *current;
    bool yn = true;
    current = head;
    if (current == NULL)
    {
        cout << "No Data." << endl;
    }
    else
    {
        while (current != NULL)
        {
            if (current->accNo == ano)
            {
                cout << "Customer Detail found." << endl;
                cout << "Account No :" << current->accNo << endl;
                cout << "Customer Name :" << current->cName << endl;
                cout << "Account Balance :" << current->bAmt << endl;
                yn = false;
                return;
            }
            current = current->next;
        }
        if (yn)
            cout << "Customer Detail Not found." << endl;
    }
}

int main()
{
    insert(001, "Manish", 50000);
    insert(002, "Manish", 50000);
    insert(003, "Manish", 50000);
    traverse();
    search(004);
}
