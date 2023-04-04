// Create a CLL using SLL for the given set of numbers. And then rotate
// the list as per the given no. of rotations towards left side.
// Input: 5, 6, 2, 3, 10, 11, 9, 8
// No. of Rotations: 2
// Output: 8, 9, 5, 6, 2, 3, 10, 11

#include <iostream>
using namespace std;

struct node{
    int val;
    struct node *nxt;
};
struct node *head;

void traverse(){
    struct node *trvrs;
    trvrs = head;
    while (trvrs->nxt!=head)
    {
        cout << trvrs->val;
        trvrs=trvrs->nxt;
    }
    cout << trvrs->val;    
}

void insert(int vl){
    struct node *nNode, *trvrs;
    nNode = (struct node *)malloc(sizeof(struct node));
    nNode->val=vl;
    nNode->nxt=head;
    if (head==NULL)
    {
        head = nNode;
        return;
    }else{
        trvrs = head;
        while (trvrs->nxt!=head)
            trvrs = trvrs->nxt;
        
        trvrs->nxt=nNode;
    }    
}

int main(){
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
}