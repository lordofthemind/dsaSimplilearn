#include<iostream>
using namespace std;

// using pointer to travrse through array
int ptrIncreamentArray(){
    int arr[3] = {2,3,4};
    int *ptr;
    ptr = &arr[0];
    for (int i = 0; i < 3; i++)
    {
        cout << *ptr << endl;
        ptr++;  
    }
    return 0;
}
// using pointer to travrse through array
int ptrDecreamentArray(){
    int arr[3] = {5,7,8};
    int *ptr;
    ptr = &arr[2];
    for (int i = 0; i < 3; i++)
    {
        cout << *ptr << endl;
        ptr--;  
    }
    return 0;
}

//using pointer to traverse with skiping 1 element in array
int ptrTraverseSkipArray(){
    int arr[7] = {3,7,4,2,9,6,1};
    int *ptr;
    ptr = &arr[0];
    int n = 2;
    for (int i = 0; i < 7; i++)
    {
        cout << * ptr << endl;
        ptr=ptr+n;
    }
    return 0;
}

int ptrTraverseReverseSkipArray(){
    int arr[7] = {3,7,4,2,9,6,1};
    int *ptr;
    ptr = &arr[6];
    int n = 2;
    for (int i = 0; i < 7; i++)
    {
        cout << * ptr << endl;
        ptr=ptr-n;
    }
    return 0;
}

int pntrToPntr(){
    int var, *ptr1, **ptr2;
    var = 5;
    ptr1 = &var;
    ptr2 = &ptr1;
    cout << "Variable = " << var << endl<< "Pointer1 = " << *ptr1 << endl<< "Pointer2 = " << **ptr2 << endl;
    return 0;
}

void pntrArray(){
    int a[5] = {3,5,7,8,4};
    int *ptr[5];
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = &a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr[i] << endl;
    }
    
}

//call by value
void func(int x){
    x =20;
    cout << "In function :" << x << endl;
}

void callByValue(){
    int x = 10;
    func(x);
    cout << x << endl;
}

//call by refrence
void func2(int *x){
    *x = 20;
    cout << "In function :" << x << endl;
}

void callByRefrence(){
    int x = 10;
    func2(&x);
    cout << x << endl;
}

int main(){

    // ptrIncreamentArray();
    // ptrDecreamentArray();
    // ptrTraverseSkipArray();
    // ptrTraverseReverseSkipArray();
    // pntrToPntr();
    // pntrArray();
    // callByValue();
    callByRefrence();
    return 0;
}