#include <iostream>
using namespace std;
#include <vector>
// print number of subsequences whose sum is equal to 'k'

int printSub(int index, int input[], int size, int k, int sum = 0)
{
    if (index == size) // this is base condition
    {
        if (sum == k)
        {
            return 1;
        }
        else
            return 0;
    }

    sum += input[index];
    int left = printSub(index + 1, input, size, k, sum);

    sum -= input[index];
    int right = printSub(index + 1, input, size, k, sum);

    return left + right;
}

int main()
{
    int input[] = {3, 1, 2};
    int size = 3;
    cout << printSub(0, input, size, 3);
    return 0;
}