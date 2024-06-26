#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
void findSum(vector<int> a, vector<int> b)
{
    vector<int> ans;
    int carry = 0; 
    int i = a.size() - 1; 
    int j = b.size() - 1; 
    while (i >= 0 && j >= 0)
    {
        int x = a[i] + b[j] + carry;  
        int digit = x % 10; 
        ans.push_back(digit); 
        carry = x / 10;
        i--; 
        j--; 
    }
    while (i >= 0)
    {
        int x = a[i] + carry;
        int digit = x % 10;
        ans.push_back(digit);
        carry = x / 10;
        i--;
    }
    while (j >= 0) 
    {
        int x = b[j] + carry;
        int digit = x % 10;
        ans.push_back(digit);
        carry = x / 10;
        j--;
    }
    if (carry) 
    {
        ans.push_back(carry);
    }
    reverse(ans.begin(), ans.end());
    for(int i = 0;i<ans.size();i++){ 
        cout<<ans[i]<<" "; 
    }
}
int main()
{
    // vector<int>a{1,0,5,9};
    // vector<int>b{8,4,2};
    int n;
    cout<<"Enter No.:- ";
    cin >>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cout<<"Enter No.:- ";
    cin>>m;
    vector<int> b(m);
    for(int j=0;j<m;j++)
    {
        cin>>b[j];
    }
    // int n;
    // cout << "Enter size of first vector: ";
    // cin >> n;
    // vector<int> a(n);
    // cout << "Enter elements of first vector: ";
    // for(int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }

    // int m;
    // cout << "Enter size of second vector: ";
    // cin >> m;
    // vector<int> b(m);
    // cout << "Enter elements of second vector: ";
    // for(int j = 0; j < m; j++)
    // {
    //     cin >> b[j];
    // }
    findSum(a,b);
    return 0;
}