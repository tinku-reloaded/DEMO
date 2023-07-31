#include <iostream>

using namespace std;

int main()
{
    int number,lower=25,upper=35;
    //cin>>lower>>upper;
    srand(time(NULL));    
    
    number = (rand() % (upper-lower+1)) + lower;
    for(int i=0;i<10;i++)
        cout<<number<<endl;
        

    return 0;
}

