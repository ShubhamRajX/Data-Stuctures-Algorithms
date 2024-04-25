#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //FIRST  EXAMPLE

    // // create vector
    // vector<int> arr;

    // // int ans = (sizeof(arr)/sizeof(int));
    // // cout<<ans << endl;

    // cout << arr.size() << endl;
    // cout << arr.capacity() << endl;

    // // insert
    // arr.push_back(5);
    // arr.push_back(8);

    // // remove/delete
    // // arr.pop_back();

    // // print
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    //SECOND EXAMPLE

    // vector<int> brr(10 , -1);

    // cout << "size of b " << brr.size() << endl;
    // cout << "capacity of b " << brr.capacity() << endl;

    // for (int i = 0; i < brr.size(); i++)
    // {
    //     cout << brr[i] << " ";
    // }
    // cout << endl;

    //THIRD EXAMPLE

    // int n;
    // cout << "Enter the value of n" << endl;

    // cin >> n;

    // vector<int> brr(n, -1);

    // cout << "size of b " << brr.size() << endl;
    // cout << "capacity of b " << brr.capacity() << endl;

    // for (int i = 0; i < brr.size(); i++)
    // {
    //     cout << brr[i] << " ";
    // }
    // cout << endl;

    //FORTH EXAMPLE
    
    cout<<"ptinting crr"<<endl;

    vector<int>crr{10,20,30,40,50};

    for(int i=0;i<crr.size();i++)
    {
        cout<<crr[i]<<" ";
    }
    cout<<endl;

    cout<<"Vector crr is Empty or not "<<crr.empty() <<endl;

    vector<int>drr;
    cout<<"Vector crr is Empty or not "<<drr.empty() <<endl;

}