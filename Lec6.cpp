#include <iostream>
using namespace std;
#include <vector>
// print subsequences using recursion

void printSub(int index, vector<int> &outPut, int input[], int size)
{
    if (index == size) // this is base condition
    {
        // print the current output vector
        for (int i = 0; i < outPut.size(); i++)
        {
            cout << outPut[i] << " ";
        }

        cout << endl;
        return;
    }

    // take or pick the particular index into the subsequence
    outPut.push_back(input[index]);
    printSub(index + 1, outPut, input, size);
    outPut.pop_back();

    // not pick
    printSub(index + 1, outPut, input, size);
}

int main()
{
    int input[] = {3, 1, 2};
    int size = 3;
    vector<int> output;
    printSub(0, output, input, size);
    return 0;
}