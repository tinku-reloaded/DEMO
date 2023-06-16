#include <iostream>
//#include<string>
using namespace std;
 
int length(string str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

int No_of_rep(string substr, string str)
{
    int res = 0;
 
    for (int i = 0; i <= (length(str) - length(substr)); i++) {
        
        int j;
        for (j = 0; j < length(substr); j++){
            
            if (str[i + j] != substr[j])
                break;
        }

        if (j == length(substr)) {
            
            res++;
        }
    }
    return res;
}

int main()
{
    string str ;
    string substr ;
    cout<<"Enter the string: ";
    getline(cin,str);
    cout<<"Enter the substring: ";
    getline(cin,substr);
    cout << "The number of times substring repeated in given string:"<<No_of_rep(substr, str);
    return 0;
}


