#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 1 || n == 0)
        return false;
   
    for (int i = 2; i < n; i++) {
        
        if (n % i == 0)
            return false;
    }
    return true;
}

void prime_pairs(int start_num, int end_num, int x)
{
    int flag = 0;
    for (int i = start_num; i <= end_num; i++) 
    {
        if (isPrime(i) and isPrime(i+x))
        {
            flag++;
            cout<<"The prime pair is: "<<i<<" and "<<i+x<<endl;
        }
    }
        if(flag == 0)
            cout<<" There is no prime pair";
    
  return ;
}

int main()
{
   int N = 100,x;
   cout<<"The difference between the primes should be: ";
   cin>>x;
   prime_pairs(1,N,x); 

 
   
    return 0;
}