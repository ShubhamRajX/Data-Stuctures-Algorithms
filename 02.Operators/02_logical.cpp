#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 3;

    //  And &&

    cout << (a>=5 && b<=3) << endl;
    cout << (a<5 && b>3) << endl;
    cout << (a>5 && b>=3) << endl;

    // OR ||

    cout << (a<5 || b<=3) << endl;
    cout << (a=5 || b<3) << endl;

    // NOT !
    
    cout << ! (b<=3) <<endl;
    cout << ! (a==5) <<endl;
    cout << ! (a<5) <<endl;
 }