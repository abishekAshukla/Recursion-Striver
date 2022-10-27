#include <iostream>
using namespace std;
#include <vector>
// https://leetcode.com/problems/subsets/

void findCombination(int index, vector<int> arr, int sum, int size, vector<vector<int>> &ans, vector<int> &output)
{
    // base condition
    if (index == size)
    {
        ans.push_back(output);
        for (int i = 0; i < output.size(); i++)
        {
            cout << output[i] << " ";
        }
        cout << endl;
        return;
    }

    // pick the element
    output.push_back(arr[index]);
    findCombination(index + 1, arr, sum + arr[index], size, ans, output);

    // not pick the element
    output.pop_back();
    findCombination(index + 1, arr, sum, size, ans, output);
}

int main()
{
    vector<int> arr = {1, 2, 2};
    int N = arr.size();
    vector<int> output;
    vector<vector<int>> ans;
    findCombination(0, arr, 0, N, ans, output);
    return 0;
}