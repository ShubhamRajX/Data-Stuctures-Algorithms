#include<iostream>
using namespace std;

int main()
{
    int marks;
    cin>> marks;
    // for multiple condition we use else  if (nested-if-else)

    if(marks>=90)
    {
        cout<<"Grade A";
    }
    else{
        if(marks>=80)
        {
            cout<<"Grade B";
        }
        else{
            if(marks>=60)
            {
                cout<<"Grade C";
            }
            else{
                if(marks>40)
                {
                    cout<<"Grade D";
                }
                else
                {
                    cout<<"Fail";
                }
            }
        }
    }
}