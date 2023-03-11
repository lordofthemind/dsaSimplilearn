#include <iostream>
using namespace std;

struct orgnl
{
    int data;
    struct orgnl *prev;
    struct orgnl *next;
};
struct orgnl *Head;

// struct fctrl
// {
//     int fdata;
//     struct fctrl *fprev;
//     struct fctrl *fnext;
// };
// struct fctrl *fHead;


void traverse()
{
    struct orgnl *current;
    current = Head;
    if (Head == NULL)
    {
        cout << "List is empty, nothing to print." << endl;
    }
    else
    {
        cout << "List is as follows..." << endl;
        while (current != NULL)
        {
            cout << current->data;
            if (current->next != NULL)
            {
                cout << " <> ";
            }
            current = current->next;
        }
        cout << endl;
    }
}

void Insert(int itm)
{
    struct orgnl *ptr, *trvrs;
    ptr = (struct orgnl *)malloc(sizeof(struct orgnl));
    if (ptr == NULL)
    {
        cout << "Memory Full." << endl;
    }
    else
    {
        ptr->data = itm;
        ptr->next = NULL;
        if (Head == NULL)
        {
            ptr->prev = NULL;
            Head = ptr;
        }
        else
        {
            trvrs = Head;
            while (trvrs->next != NULL)
            {
                trvrs = trvrs->next;
            }
            trvrs->next = ptr;
            ptr->prev = trvrs;
        }
        cout << "Element inserted in Doubly linked list." << endl;
    }
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}


// void InsertFct(int itm)
// {
//     struct fctrl *fptr, *ftrvrs;
//     fptr = (struct fctrl *)malloc(sizeof(struct fctrl));
//     if (fptr == NULL)
//     {
//         cout << "Memory Full." << endl;
//     }
//     else
//     {
//         fptr->fdata = itm;
//         fptr->fnext = NULL;
//         if (Head == NULL)
//         {
//             fptr->fprev = NULL;
//             fHead = fptr;
//         }
//         else
//         {
//             ftrvrs = fHead;
//             while (ftrvrs->fnext != NULL)
//             {
//                 ftrvrs = ftrvrs->fnext;
//             }
//             ftrvrs->fnext = fptr;
//             fptr->fprev = ftrvrs;
//         }
//         cout << "Element inserted in Factorial Doubly linked list." << endl;
//     }
// }


void calcFact()
{
    struct orgnl *current;
    current = Head;
    int fct;
    if (Head == NULL)
    {
        cout << "List is empty, nothing to calculate factorial." << endl;
    }
    else
    {
        cout << "Calculating Factorial" << endl;
        while (current != NULL)
        {
            fct = factorial(current->data);
            cout << fct;
            if (current->next != NULL)
            {
                cout << " <> ";
            }
            current = current->next;
        }
        cout << endl;
    }
}




// void traverseFctrl()
// {
//     struct fctrl *fcurrent;
//     fcurrent = fHead;
//     if (fHead == NULL)
//     {
//         cout << "List is empty, nothing to print." << endl;
//     }
//     else
//     {
//         cout << "Factorial List: " << endl;
//         while (fcurrent != NULL)
//         {
//             cout << fcurrent->fdata;
//             if (fcurrent->fnext != NULL)
//             {
//                 cout << " <> ";
//             }
//             fcurrent = fcurrent->fnext;
//         }
//         cout << endl;
//     }
// }





int main()
{
    Insert(0);
    Insert(1);
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5);
    traverse();
    calcFact();
}