#include<iostream>
using namespace std;

int main()
{
    // int n;
    // cin>>n;
    // for n times 
    for(int row=0;row<5;row+=1)
    {
        for(int col=0;col<5-row;col+=1)
        {
            cout<<col + 1  ;
        }
        cout<<endl;
    }
}