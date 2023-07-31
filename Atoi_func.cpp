#include <iostream>
#include <string>

using namespace std;

int char_atoi(const string& s) {
    int result = 0;
    int sign = 1;
    int i = 0;

    while (i < s.length() && s[i] == ' ') {
        i++;
    }
    
    if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    while (i < s.length() && isdigit(s[i])) { //Checks whether input character is a decimal number(0-9) or not. 
        result = result * 10 + (s[i] - '0'); // Here the ASCII value of s[i] will be subtracted from that of zero to get the digit value.
        i++;
    }

    return sign * result;
}

int main() {
    string num_str;
    cout<<"Enter the string: ";
    getline(cin,num_str);
    int num = char_atoi(num_str);
    cout << num << endl; 

    return 0;
}

