#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //INTERSECTION  

    vector<int>arr{1,2,3,4,5};
    vector<int>brr{3,4,5,6};

    vector<int>ans;

    //outer loop on arr vector
    for(int i=0;i<arr.size();i++)
    {
        int element = arr[i];
        //inner loop for every element,run loop on brr
        for(int j=0;j<brr.size();j++)
        {
            if (element == brr[j])
            {
                ans.push_back(element);
            }
            
        }
    }
    //Printing ans
    for(auto value:ans)
    {
        cout<<value<<" ";
    }
}