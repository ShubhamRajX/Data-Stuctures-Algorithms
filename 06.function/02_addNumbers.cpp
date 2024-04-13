#include<iostream>
using namespace std;

int add(int a,int b){
    int result = a+b;
    return result;
}

int main()
{
    int a;
    cout<<"enter a" <<endl;
    cin>>a;

    int b;
    cout<<"enter b" <<endl;
    cin>>b; 

    int sum = add(a ,b);

    cout<<"Result is: " <<sum <<endl;
}
