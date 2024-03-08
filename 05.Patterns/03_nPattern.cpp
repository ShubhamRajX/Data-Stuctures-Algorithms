#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // inner loop
    // row+=1 is same as row=row+1
    for(int row=0;row<n;row+=1)
    {
    // outer loop 
    // col+=1 is same as col=col+1
        for(int col=0;col<n;col+=1)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}