#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
   int n;
   cin>>n;
   vector<int>arr(n);

   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   int a;
   cout <<"Enter target element: ";
   cin>>a;

   int target = a;

    auto ans1 = lower_bound (arr.begin(), arr.end(), target);
    auto ans2 = upper_bound (arr.begin(), arr.end(), target);
   
    cout<<"First Occurence is: " <<ans1-arr.begin() <<" index"<<endl;
    cout<<"Last Occurence is: " <<ans2-arr.begin() <<" index"<<endl;

    int ans3 = ans2 - ans1 +1;
    cout<<"Total Occurence is: " <<ans3 ;
}