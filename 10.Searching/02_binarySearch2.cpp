#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int binarySearch(vector<int>arr, int n, int target)
{
    if(binary_search (arr.begin(), arr.end(), target))
    {
        cout<<"Found"<<endl;
    }
    else{
         cout<<"Not Found"<<endl;
    }
} 

int main()
{
    int a;
    int n;
    cout<<"Enter size:- ";
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    
    cout <<"Enter search element:-";
    cin>>a;
    int target = a;
    
    binarySearch(arr, n, target);
}