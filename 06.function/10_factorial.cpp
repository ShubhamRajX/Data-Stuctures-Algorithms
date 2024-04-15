#include<iostream>
using namespace std;

int factorial(int n)
{
    // int fact = 1;
    // for(int i=1;i<=n;i++)
    // {
    //     fact = fact * i;
    // }
    // return fact;
    int mul = n;
    for (int i=n-1;i>=1;i--)
    {
        mul=mul*i;
    }
    return mul;
}
int main()
{
    int n;
    cin >> n;

    int fact = factorial(n);

    cout << "Factorial is "<< fact;
}