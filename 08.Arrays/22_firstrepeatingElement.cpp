#include<iostream>
using namespace std;

int firstRepeating(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool isRepeating = false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                isRepeating = true;
                return i+1;
                // cout<<i+1;
            }
        }
    }
    return -1;
    // cout<<-1;
}

int main()
{
    int n;
    cout<<"Enter No. of Elements:- ";
    cin>>n;

    int arr[n];

    cout<<"Enter the Elements:- "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Elements:- "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int result = firstRepeating(arr,n);
    if(result != -1)
    {
        cout<<"The first Repeating Element at position is: "<<result<<endl;
    }
    else{
        cout<<"No Repeating Element is Found."<<-1<<endl;
    }
}

// #include<iostream>
// #include<vector>
// using namespace std;
// int findRepeatingElement(vector<int>&arr){
//     vector<int>countArray(1000000,0); 
//     // Store the count of each element
//     for(int i = 0;i<arr.size();i++){
//         countArray[arr[i]]++;
//     }
//     // Traverse the input array and know whether count is greater than or equal to 2
//     for(int i = 0;i<arr.size();i++){
//         if(countArray[arr[i]] >= 2){
//             int ans = arr[i];
//             return ans;
//         }
//     }
//     return -1; // If no repeating element exists
// }
// int main(){
//     vector<int>arr{1,2,3,4,1};
//     int ans = findRepeatingElement(arr);
//     cout<<ans;
//     return 0;
// }