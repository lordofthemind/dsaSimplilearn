#include <iostream>
using namespace std;

// Linked list node
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end of a linked list
void insert(Node** head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* last = *head;
    while (last->next != NULL)
        last = last->next;
    last->next = newNode;
}

// Function to compute the factorial of a given number
int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n-1);
}

// Function to insert the factorial of values of a linked list in another linked list
void insertFactorial(Node* head, Node** resultHead) {
    while (head != NULL) {
        int fact = factorial(head->data);
        insert(resultHead, fact);
        head = head->next;
    }
}

// Function to print a linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Driver code
int main() {
    Node* head = NULL;
    insert(&head, 5);
    insert(&head, 3);
    insert(&head, 4);
    insert(&head, 2);
    cout << "Input list: ";
    printList(head);

    Node* resultHead = NULL;
    insertFactorial(head, &resultHead);
    cout << "Result list: ";
    printList(resultHead);

    return 0;
}
