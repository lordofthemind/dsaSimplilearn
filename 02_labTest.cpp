// Create Doubly Linked List to store Employee details 
// and implement Search operation to find particular 
// employee salary using EID.
// Employee data fields are: Eid, Ename, Salary
#include <iostream>
using namespace std;

struct empDet
{
    struct empDet *prev;
    int Eid;
    string Ename;
    int Salary;
    struct empDet *next;
};


void traverse(empDet *head)
{
    while (head != NULL)
    {
        cout << "Employee ID: " << head->Eid << endl;
        cout << "Employee Name: " << head->Ename << endl;
        cout << "Employee Salary: " << head->Salary << endl;
        if (head->next != NULL)
            cout << " <> " << endl;
        head = head->next;
    }
    cout << endl;
}


void insert(empDet **head, int id, string nm, int sal){
    empDet *nNode = new empDet();
    nNode->Eid = id; 
    nNode->Ename = nm; 
    nNode->Salary = sal;
    nNode->next = NULL;
    if (*head == NULL)
    {
        *head = nNode;
        nNode->prev = NULL;
        return;
    }
    empDet *last = *head;
    while (last->next != NULL)
        last = last->next;
    last->next = nNode;
    last->next->prev = last;    
}


void search(empDet *head, int sId){
    while (head != NULL)
    {
        if (head->Eid == sId)
        {
            cout << "Employee ID: " << head->Eid << endl;
            cout << "Employee Name: " << head->Ename << endl;
            cout << "Employee Salary: " << head->Salary << endl;
            return;
        }
        head = head->next;
    }
    cout << endl;
}


int main(){
    empDet *head = NULL;
    insert(&head, 0, "Taha", 15);
    insert(&head, 6, "Taha", 16);
    insert(&head, 7, "Taha", 17);
    insert(&head, 8, "Taha", 18);
    traverse(head);
    search(head, 7);

}