#include <iostream>
using namespace std;

// Parameterised Recursion
void sum1toN(int i, int n, int sum = 0)
{
    if (i > n)
    {
        cout << sum << endl;
        return;
    }

    sum1toN(i + 1, n, sum + i);
}

// Functional Recursion
int sum1toNFunc(int n)
{
    if (n == 0)
        return 0;

    return n + sum1toNFunc(n - 1);
}

int main()
{
    sum1toN(1, 4);
    // cout<<sum1toNFunc(5);
    return 0;
}