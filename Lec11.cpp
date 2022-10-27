#include <iostream>
using namespace std;
#include <vector>

// https://leetcode.com/problems/subsets-ii/submissions/

void findCombination(int index, vector<vector<int>> &ans, vector<int> &output, vector<int> input)
{
    ans.push_back(output);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
    cout << endl;
    for (int i = index; i < input.size(); i++)
    {
        if (i != index && input[i] == input[i - 1])
            continue;

        output.push_back(input[i]);
        findCombination(i + 1, ans, output, input);
        output.pop_back();
    }
}

int main()
{
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> ans;
    vector<int> output;
    // sort(nums.begin(), nums.end());
    findCombination(0, ans, output, nums);
    return 0;
}