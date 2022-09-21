#include <iostream>
using namespace std;

void print(int i)
{
    cout << i << " ";
    if (i < 10)
    {
        i++;
        print(i);
    }
}

int main()
{
    int i = 1;
    print(i);
    return 0;
}