#include<iostream>
using namespace std;

int evenNumber(int n)
{
    for(int i=0;i<=n;i=i+2)
    cout<< i << endl;
}

int main()
{
    int n;
    cout<<"enter n:-";
    cin>>n;

    int number=evenNumber(n);
}