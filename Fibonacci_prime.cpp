#include <iostream>

using namespace std;
#define SIZE 15

int is_prime(int variable){
	for(int iter =2;iter<(variable/2);iter++){
		if((variable%iter) == 0)
			return 0;
	}
	return 1;
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
	int *arr = new int[SIZE];
	cout<<"enter number of digits needed for fibnacii : ";
	cin>>length;
	size = fibnacii(arr,length);
	for(int iter=0;iter<(*size);iter++)
		cout<<arr[iter];
	cout<<endl;
	for(int iter=3;iter<(*size);iter++){
		if(is_prime(arr[iter]))
			cout<<arr[iter]<<" is prime ";
	}
	return 0;
}