#include <iostream>
using namespace std;
#include <vector>
#include <string.h>
// Check if given string is palindrome or not

void checkPalindrome(string str, int i = 0)
{
    int stringSize = str.length();

    if (i >= (stringSize / 2))
    {
        cout << "it is palindrome" << endl;
        return;
    }

    if (str[i] != str[stringSize - i - 1])
    {
        cout << "not palindrome" << endl;
        return;
    }

    checkPalindrome(str, i + 1);
}

int main()
{
    string str = "malayala";
    checkPalindrome(str);
    return 0;
}