#include <iostream>

using namespace std;

bool isHexDigit(char c)
{
    return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f'));
}

bool Validate_Mac(string str)
{
    if (str.length() != 17)
        return false;

    for (int i = 0; i < 17; i++) {
        char c = str[i];

        if (i % 3 == 2) {
            if (c != ':')
                return false;
        }
        else if (!isHexDigit(c)) {
            return false;
        }
    }

    return true;
}

int main()
{
    string str;
    cout << "Enter the MAC Address: ";
    getline(cin, str);

    if (Validate_Mac(str)) {
        cout << "Valid MAC address";
    }
    else {
        cout << "Invalid MAC address.";
    }

    return 0;
}
