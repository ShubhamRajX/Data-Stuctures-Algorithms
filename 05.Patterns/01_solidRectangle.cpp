#include<iostream>
using namespace std;
// printing solid rectangle
int main()
{
    // outer loop for row 
    for(int row=0;row<3;row=row+1)
    {
        // inner loop for column
       for(int col=0;col<5;col=col+1)
        {
            cout<<"* ";
        }
        // for new row 
        cout<<endl;
    }
}
