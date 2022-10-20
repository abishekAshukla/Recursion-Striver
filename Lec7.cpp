#include <iostream>
using namespace std;
#include <vector>
// print subsequences whose sum is equal to 'k'

void printSub(int index, vector<int> &outPut, int input[], int size, int k, int sum = 0)
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
        }

        return;
    }

    // take or pick the particular index into the subsequence
    outPut.push_back(input[index]);
    sum += input[index];
    printSub(index + 1, outPut, input, size, k, sum);
    outPut.pop_back();
    sum -= input[index];

    // not pick
    printSub(index + 1, outPut, input, size, k, sum);
}

int main()
{
    int input[] = {3, 1, 2};
    int size = 3;
    vector<int> output;
    printSub(0, output, input, size, 3);
    return 0;
}