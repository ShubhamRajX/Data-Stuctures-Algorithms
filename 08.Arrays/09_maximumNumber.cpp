#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    //initialse the maximum variable with the minimum possible integer value
    int max= INT_MIN;
    int arr[50];
    int n;

    cout<<"How mant numbers want to enter:-";
    cin>> n;

    cout<<"Enter the numbers;-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            //found a number greater than max, and update max
            max=arr[i];
        }
    }
    cout<<"Maximum number is "<<max;
}