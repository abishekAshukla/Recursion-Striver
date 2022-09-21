#include <iostream>
using namespace std;

// Note:
// Normal Recursion : Jate waqt kam karna
// Backtracking: Aate waqt kam karna

void printFromItoN(int i, int n)
{
    if (i > n)
        return;

    cout << i << endl;
    printFromItoN(i + 1, n);
}

void printNto1(int n)
{
    if (n < 1)
        return;

    cout << n << endl;
    printNto1(n - 1);
}

void print1toNBack(int n)
{ // printing 1 to n using backtracking
    if (n < 1)
        return;

    print1toNBack(n - 1);
    cout << n << endl;
}

int main()
{
    // printFromItoN(1, 5);
    // printNto1(5);
    print1toNBack(5);
    return 0;
}