#include<iostream>
using namespace std;

float areaOfCircle(float n)
{
    float area = (3.14)*n*n;
    return area;
}
int main()
{
    float radius;
    cout<<"Enter radius" << endl;
    cin>>radius;

    float area = areaOfCircle(radius);

    cout<<area <<endl;
}