#include<iostream>
using namespace std;

void printName()
{
    int n;
    cout<<"Enter the value of n" <<endl;

    cin>> n;
    for(int i=0;i<n;i++)
    {
        cout<<"Shubham Raj" << endl;
    }
}

int main()
{
    //function call
    printName();
}