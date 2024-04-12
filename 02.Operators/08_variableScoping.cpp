#include<iostream>
using namespace std;

 int x=42;          //it is global variable ,use in where in the code

int main()
{
    int a;      //declaration

    int b = 5;        //initialisation
                      //this is valid b/w main bracket

    b = 10;           //updation

    // cout << x << endl;
    
    //int b=15;    //give error:- already initialised

    if(true)
    {
        int b = 15;       // no error ,the value of b valid in curely brackets
        cout << b << endl;
        //cout << x << endl;
    }

    cout << b <<endl;
}