//Q)Diff between static and dynamic array.

#include <iostream>

using namespace std;

int* Create_Array_Dynamically(int size){
    int* arr = new int[size];
    for(int i=0;i<size;i++)
    {
        arr[i] = i;
    }
    return arr;
}

int* Create_Array(int size){
    int brr[size];
    for(int i=0;i<size;i++)
    {
        brr[i] = i;
    }
    return brr;
}

int main()
{
    int size;
    cout<<"Enter the size of the required array: ";
    cin>>size;
    int *ptr = new int[size];
    int  *qtr = new int[size];
    ptr = Create_Array_Dynamically(size);
    qtr = Create_Array(size);
    
    for(int i=0;i<size;i++){
        cout<<*(ptr+i);
    }
    
    cout<<endl;
    cout<<"hello"
    
    for(int i=0;i<size;i++){
        cout<<*(qtr+i);
    }

    return 0;
}
