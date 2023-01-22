#include<iostream>
using namespace std;

int nullPointer(){
    int *ptr;
    // ptr = NULL;
    cout<<*ptr;
    return 0;
}

int voidPointer(){
    int a = 5;
    void *ptr;
    ptr = &a;
    cout<< *(int *)ptr <<endl;
    return 0;
}

int wildPointer(){
    int *ptr;
    cout << *ptr<<endl;
    return 0;
}

int danglingPointer(){
    int *ptr = (int *)malloc(sizeof(int));
    int a = 5;
    ptr= &a;
    free(ptr);
    cout << *ptr << endl;
    return 0; 
}

int main(){

    // nullPointer();
    // voidPointer();
    // wildPointer();
    danglingPointer();

    int a = 5, *ptr;
    ptr = &a;
    cout<<"Through name a = "<<a<<endl;
    cout<<"Through addr a = "<<*ptr<<endl;
    return 0;
}