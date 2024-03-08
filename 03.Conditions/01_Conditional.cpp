#include<iostream>
using namespace std;

int main()
{
    // declare the integer type score variable
    int score;
    // print enter the score
    cout<< "enter the score" <<endl;
    // take input into score variable
    cin >> score;
    // apply if else condition
    if (score<300)
    {
        cout<<"India wins"<<endl;
    }
    else{
       cout<<"pak wins"<<endl;
    }
}