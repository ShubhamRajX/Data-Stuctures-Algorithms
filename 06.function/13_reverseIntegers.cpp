#include<iostream>
#include<limits.h>
using namespace std;

int reverse(int n) {
    int ans = 0;
    bool isNeg = false;
    long long x = n; // Convert to long long to handle INT_MIN
    if (x < 0) {
        isNeg = true;
        x = -x;
    }
    while (x > 0) {
        if (ans > INT_MAX / 10) {
            return 0;
        }
        int digit = x % 10;
        ans = ans * 10 + digit;
        x = x / 10;
    }
    return isNeg ? -ans : ans;
}


int main()
{
    int n;
    cin>>n;

    int result = reverse(n);

    cout <<result;
}



// //leetcode
// class solution
// {
//     public:
// int reverse(int n)
// {
//     int ans =0, rem=0;
//     bool isNeg=false;

//     if(x <= INT_MIN)
//     {
//         return 0;
//     }
//     if(x<0)
//     {
//         isNeg=true;
//         x=-x;
//     }
//     while(x>0)
//     {
//         if (ans> INT_MAX / 10)
//         {
//             return 0;
//         }
//         int digit = x%10;
//         ana=ans*10+digit;
//         x=x/10;
//     }
//     return isNeg? -ans: ans;
// }
// }