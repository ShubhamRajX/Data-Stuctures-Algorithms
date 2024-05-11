#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int findDuplicate(vector<int>&nums,int n)
{
    sort(nums.begin(),nums.end());

    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] == nums[i+1])
        {
            return nums[i];
        }
    }
    return -1;
}

int main()
{
    int n;
    // vector<int>nums{1,2,3,4,2};
    // vector<int>nums{1,2,3,4,3};
    vector<int>nums{1,2,3,4,5};

    int result = findDuplicate(nums,n);

    if(result != -1)
    {
        cout<<result<<" "<<endl;
    }
    else{
        cout<<-1;
    }
}