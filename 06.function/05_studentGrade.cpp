#include<iostream>
using namespace std;

char getGrade(int marks)
{
    if (marks>=90)
    //return "A";
    {
        cout<< "A";
    }
    else if (marks>=70)
    //return "B";
    {
        cout<< "B";
    }
    else if(marks>=30)
    //return "C";
    {
        cout<<"C";
    }
    else
    //return "F";
    {
        cout<<"F";
    }
}
int main()
{
    int marks;
    cout<<"Enter your marks:-" << endl;
    cin>> marks;

    char grade=getGrade(marks);

    // cout<< grade;
}