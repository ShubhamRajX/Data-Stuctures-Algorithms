#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinary(int n)
{
    //Division Method only for 10
    int binaryNo = 0;
    int i=0;
    while(n>0)
    {
        int bit = n % 2;
        binaryNo = bit*pow(10, i++) + binaryNo;
        n=n/2;
    }
    return binaryNo;
}

int main()
{
    int n;
    cin>>n;
    int binary = decimalToBinary(n);
    cout<<binary<<endl;
}