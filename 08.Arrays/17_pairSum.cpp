#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> arr{10, 20, 30, 40, 50, 60, 70};
    // int sum = 80;

    // // outer loop will traverse for eah element

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     int element = arr[i];

    //     // inner loop,for traverse next element

    //     for (int j = i + 1; j < arr.size(); j++)
    //         if (element + arr[j] == sum)
    //         {
    //             cout << "Pair " << element << " , " << arr[j] << endl;
    //         }
    // }

    //user input in two different array
    int a;
    cout<<"Enter the no. first vector: ";
    cin>>a;
    vector<int>arr(a);

    cout<<"Enter the no. in first vector:"<<endl;
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }

    int b;
    cout<<"Enter the no. second vector: ";
    cin>>b;
    vector<int>brr(b);

    cout<<"Enter the no. in first vector:"<<endl;
    for(int j=0;j<b;j++)
    {
        cin>>brr[j];
    }

    int sum = 100;

    for(int i=0;i<a;i++)
    {
        // int element = arr[i];
        for(int j=0;j<b;j++)
        {
            // if(element + brr[j] == sum)
            if(arr[i] + brr[j] == sum)
            {
                // cout<<"Pair is:- "<<element<<" , "<<brr[j]<<endl;
                cout<<"Pair is:- "<<arr[i]<<" , "<<brr[j]<<endl;
            }
        }
    }
}