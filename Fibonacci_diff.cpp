#include<iostream>
using namespace std;
#define SIZE 15

void difference(int* arr, int value, int size){
	for(int iter1 = 0; iter1<size; iter1++)	{
		for(int iter2 = iter1; iter2 < size; iter2++){
			if((arr[iter2]-arr[iter1]) == value)
				cout<<arr[iter1]<<", "<<arr[iter2];
		}
	}
}

int* fibnacii(int* arr,int value){
	int start = 0;
	int n = 1;
	int temp = 0;
	int *result = new int[SIZE];
	for(int iter=0;iter<value;iter++){
		temp = start;
		start = n;
	       	n = start+temp;
		(*result)++;	
		arr[iter] = temp;
	}
	return result;
}

int main(void){
        int* size;
        int length;
	    int diff;
        int *arr = new int[SIZE];
        cout<<"enter number of digits needed for fibnacii : ";
        cin>>length;
	    cout<<"enter the difference to be caluclated :";
	    cin>>diff;
        size = fibnacii(arr,length);
        for(int iter=0;iter<(*size);iter++)
                cout<<arr[iter];
        cout<<endl;
        difference(arr,diff,(*size));
        return 0;
}
