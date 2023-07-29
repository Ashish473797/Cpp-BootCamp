#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        nums.resize(s.size());
        int j = 0;
        for(auto i: s)
        {
            nums[j++] = i;
        }
        return s.size();
    }

int main()
{
    int n;
    cout<<"How many element did you want to Enter: ";
    cin>>n;
    vector<int> nums;
    cout<<"Enter "<<n<<" Elements: ";
    for(int i = 0; i < n; i++)
    {
        int value;
        cin>>value;
        nums.push_back(value);
    }
    cout<<"Number of Unique Elements are: "<<removeDuplicates(nums)<<endl;
    cout<<"And Elements are: ";
    for(int i: nums)
    {
        cout<<i<<" ";
    }
    return 0;
}