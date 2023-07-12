#include <iostream>
#include<string>
using namespace std;

bool Digit(char c)
{
    return (c >= '0' && c <= '9');
}

int length(string str)
{
    int *i = new int;
    *i = 0;
    while(str[*i]){
        (*i)++    ;    
    }
    return *i;
}

bool verify(string str)
{
    

    for (int i = 0; i < length(str); i++) {
        char c = str[i];

        if (Digit(c)) {
            cout<<c;
        }
      //  cout<<endl;
    }

    return true;
}
int main()
{
    string str;     //why is it not working with "char const*"
    cout << "Enter the sentence: ";
    getline(cin, str);
    verify(str);

    return 0;
}

