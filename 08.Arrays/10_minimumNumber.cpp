#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
   //initialse the minimum variable with the minimum possible integer value
    int min= INT_MAX;
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
        if(arr[i] < min)
        {
            //found a number smallest than min, and update min
            min=arr[i];
        }
    }
    cout<<"Maximum number is "<<min;
}