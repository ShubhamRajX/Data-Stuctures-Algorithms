#include<iostream>
using namespace std;

int main()
{
    // inner loop
    for(int row=0;row<4;row=row+1)
    {
    // outer loop 
        for(int col=0;col<4;col=col+1)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}