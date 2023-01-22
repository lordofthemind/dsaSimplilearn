#include<iostream>
using namespace std;

void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void beginsert(int arr[], int n){
    int i, item;
    cout << "Enter element to insert in the begining :";
    cin >> item;
    n++;
    for (i = n; i > 1; i--)
    {
        arr[i-1] = arr[i-2];
    }
    arr[0] = item;
}

void randInsert(int arr[], int n){
    int i, p, item;
    cout << "Enter position where to insert :";
    cin >> p;
    cout << "Enter element to insert :";
    cin >> item;
    n++;
    for (i = n - 1; i >= p - 1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[p-1] = item;
}

int main(){

    int i, n;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter element "<< i << ": ";
        cin >> arr[i];
    }
    cout << "Original array is : ";
    display(arr, n);
    beginsert(arr, n);
    cout << "Array after insertion in begining is : ";
    display(arr, n);
    randInsert(arr, n);
    cout << "Array after random insertion is : ";
    display(arr, n);
}