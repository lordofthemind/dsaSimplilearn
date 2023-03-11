#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};
struct node *head;

void traverseList(){
    struct node *current;
    current = head;
    if (head == NULL)
    {
        cout << "List is empty, nothing to print." <<endl;
    }else{
        cout << "List is as follows..." <<endl;
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    
}

void beginInsert(){
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        cout << "Memory overflow." << endl;
    }else{
        cout << "Enter the value of node: ";
        cin >> item;
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        cout << "Node inserted." << endl;
    }
    
}

void endInsert(){
    struct node *ptr, *trvrs;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        cout << "Memory overflow." << endl;
    }else{
        cout << "Enter the value of node: ";
        cin >> item;
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            cout << "Node inserted in last." << endl;
        }else{
            trvrs = head;
            while (trvrs->next!=NULL)
            {
                trvrs = trvrs->next;
            }
            trvrs->next = ptr;
            ptr->next = NULL;
            cout << "Node inserted in last." << endl;
        }
    }
}

void randInsert(){
    struct node *ptr, *trvrs;
    int item, i, pos;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        cout << "Memory overflow." << endl;
    }else{
        cout << "Enter the value of node: ";
        cin >> item;
        cout << "Enter the location after which value will be inserted: ";
        cin >> pos;
        trvrs = head;
        for (i = 0; i < pos; i++)
        {
            trvrs = trvrs->next;
            if (trvrs == NULL)
            {
                cout << "Can't insert, location out of bound." << endl;
                return;
            }
            ptr->next = trvrs->next;
            trvrs->next = ptr;
            cout << "Node inserted after " << pos << endl;
        }
    }
}

void beginDelete(){

}

void endDelete(){

}

void randDelete(){

}

void search(){

}

int main(){

    beginInsert();
    beginInsert();
    traverseList();
    endInsert();
    endInsert();
    endInsert();
    traverseList();
    randInsert();
    traverseList();
}