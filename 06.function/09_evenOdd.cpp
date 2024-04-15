#include<iostream>
using namespace std;

int evenOdd(int n)
{
    if(n % 2 == 0)
    {
        cout << "Even";
    }
    else{
        cout << "Odd";
    }
}
int main()
{
    int n;
    cout<<"Enter n" <<endl;
    cin>>n;

    int result = evenOdd(n);

}