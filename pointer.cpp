#include<iostream>
using namespace std;

int main(){
    int a = 5, *ptr;
    ptr = &a;
    cout<<"Through name a = "<<a<<endl;
    cout<<"Through addr a = "<<*ptr<<endl;
    return 0;
}