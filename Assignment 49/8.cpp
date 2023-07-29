// Find all matrix elements which are minimum in their row and maximum in their column

#include<bits/stdc++.h>
using namespace std;

vector<int> minmaxNumber(vector<vector<int>> &matrix, vector<int> &ans)
{
    unordered_set<int> uset;

    for(int i = 0; i < matrix.size(); i++)
    {
        int minRow = INT_MAX;
        for(int j = 0; j < matrix[i].size(); j++)
        {
            minRow = min(minRow, matrix[i][j]);
        }
        uset.insert(minRow);
    }

    for(int i = 0; i < matrix[0].size(); i++)
    {
        int maxCol = INT_MIN;
        for(int j = 0; j < matrix.size(); j++)
        {
            maxCol = max(maxCol, matrix[j][i]);
        }
        if(uset.find(maxCol) != uset.end())
        {
            ans.push_back(maxCol);
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {
        { 1, 10, 4},
        { 9, 3, 8},
        {15, 16, 17}
    };

    vector<int> ans;

    minmaxNumber(matrix, ans);

    if(ans.size() == 0)
    cout<<"-1"<<endl;

    for(int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}