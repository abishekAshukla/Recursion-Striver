#include <iostream>
using namespace std;
#include <vector>

// leetcode: combination sum 2

void findCombination(int index, int target, vector<int> &input, vector<vector<int>> &ans, vector<int> &output)
{
    if (target == 0)
    { // base condition
        ans.push_back(output);
        return;
    }

    for (int i = index; i < input.size(); i++)
    {
        if (i > index && input[i] == input[i - 1])
            continue; // to avoid duplication of subsequences
        if (input[i] > target)
            break;
        output.push_back(input[i]);
        findCombination(i + 1, target - input[i], input, ans, output);
        output.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    // sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans; // to store the final subsequences
    vector<int> output;
    findCombination(0, 4, candidates, ans, output);
    return ans;
}

int main()
{

    return 0;
}