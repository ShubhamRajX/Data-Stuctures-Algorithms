#include<iostream>
using namespace std;

int setKthBit(int N ,int K)
    {
        //write your code here
        int mask = 1 << K;
        int ans = N | mask;
        return ans;


        // return N | (1<<K);
    }

int main()
{
    int N;
    cin>>N;

    int K;
    cin>>K;

    int result = setKthBit(N,K);

    cout <<result;
}