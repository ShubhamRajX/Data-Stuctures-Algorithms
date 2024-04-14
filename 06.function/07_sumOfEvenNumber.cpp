#include<iostream>
using namespace std;

int getEvenSum(int n)
{
    int a = 0;                  //int sum=0
    for(int i=0;i<=n;i=i+2)    //i=0 or i=2 
    {
        a = a+i;              //sum = sum + 2
    }
    return a;
}
int main()
{
    int n;
    cout<<"Enter n:-";
    cin>> n;

    int ans=getEvenSum(n);

    cout << "Sum upto " << n << " is " <<ans;
}