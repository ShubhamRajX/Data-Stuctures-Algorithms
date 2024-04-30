#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr{10,20,30,40,50,60,70,80,90};
    int sum = 120;

    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            for(int k=i+2;k<arr.size();k++)
            if(arr[i]+arr[j]+arr[k]==sum)
            {
                cout<<"Pair :- "<<arr[i]<<" , "<<arr[j]<<" , "<<arr[k]<<endl;
            }
        }
    }
}