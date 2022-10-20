#include <iostream>
using namespace std;
#include <vector>
// print subsequences using recursion
// leetcode: https://leetcode.com/problems/combination-sum/


void printSub(int index, vector<int> &outPut, int input[], int size, int target)
{
    if (index == size) // this is base condition
    {
        if (target == 0)
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

    // Recursion call 1 // pick with same index
    if (input[index] <= target)
    {
        outPut.push_back(input[index]);
        printSub(index, outPut, input, size, target - input[index]);
        outPut.pop_back();
    }

    // Recursion call 2 // not pick with next index
    printSub(index + 1, outPut, input, size, target);
}

int main()
{
    int input[] = {3, 1, 2};
    int size = 3;
    int target = 3;
    vector<int> output;
    printSub(0, output, input, size, target);
    return 0;
}