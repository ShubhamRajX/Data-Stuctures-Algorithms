#include<iostream>
using namespace std;

int main()
{
    // automatically convert one data type to another data type called implicit type casting/coversion
    char ch = 97;
    cout<< ch << endl;

    int num = 'b';
    cout << num << endl;

    // manually converion when we need to convert one data type to another we use ()
    // that is called explicit type casting/conversion
    float b = (float)2;
    cout << b << endl;

    double d = 5.7;
    int x = (int)d + 2;
    cout << "value of x is " <<x << endl;

}