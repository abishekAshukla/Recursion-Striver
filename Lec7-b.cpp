#include <iostream>
using namespace std;
#include <vector>
// print any one subsequence whose sum is equal to 'k'
// Learning technique to print only one true case
// Avoiding future recursion calls

bool printSub(int index, vector<int> &outPut, int input[], int size, int k, int sum = 0)
{
    if (index == size) // this is base condition
    {
        if (sum == k)
        {
            // print the current output vector
            for (int i = 0; i < outPut.size(); i++)
            {
                cout << outPut[i] << " ";
            }

            cout << endl;
            return true;
        }

        else
            return false;
    }

    // take or pick the particular index into the subsequence
    outPut.push_back(input[index]);
    sum += input[index];
    if (printSub(index + 1, outPut, input, size, k, sum) == true)
    {
        return true;
    };
    outPut.pop_back();
    sum -= input[index];

    // not pick
    if (printSub(index + 1, outPut, input, size, k, sum) == true)
    {
        return true;
    };

    return false;
}

int main()
{
    int input[] = {3, 1, 2};
    int size = 3;
    vector<int> output;
    printSub(0, output, input, size, 3);
    return 0;
}