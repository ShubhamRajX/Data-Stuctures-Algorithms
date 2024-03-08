#include<iostream>
using namespace std;

int main()
{
    int rowcount;
    cin>>rowcount;
    int colcount;
    cin>>colcount;

    for(int row=0;row<rowcount;row+=1)
    {
        if(row==0 || row==rowcount-1)
        {
            for(int col=0;col<colcount;col+=1)
            {
                cout<<"* ";
            }
        }
        else{
            cout<<"* ";
            for(int i=0;i<colcount-2;i+=1)
            {
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
}