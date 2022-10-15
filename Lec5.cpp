#include <iostream>
using namespace std;
// Multiple Recursion Calls
// Note: When there are multiple recursion calls, 
// those recursion calls does not take place simultanoeusly, first one is executed after it's completion then the next one starts executing

int fibonacci(int n)
{
    if (n <= 1)
        return n; // for '0' and '1'

    int last = fibonacci(n - 1);
    int secondLast = fibonacci(n - 2);
    return last + secondLast;
}

int main()
{
    cout<<fibonacci(7);
    return 0;
}