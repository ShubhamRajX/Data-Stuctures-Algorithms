#include<iostream>
using namespace std;

// bool find(int arr[], int size, int key)
// {
//     // linear search

//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==key)
//         return true;
//     }

//     // not present
//     return false;
// }

// int main()
// {
//     int arr[5]={1,3,5,7,9};
//     int size;

//     cout<<"Enter the key to find "<<endl;
//     int key;
//     cin>>key;

//     if(find(arr,size,key))
//     {
//         cout<<"Found"<<endl;
//     }
//     else{
//         cout<<"Not found"<<endl;
//     }
// }


int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=9;
     
    // int key=5;
    int key = 0;

    bool flag=0;
    //0 -> not found
    //1-> found

    //Linear Search
    for(int i=0;i<9;i++)
    {
        if(arr[i]==key)
        {
            //found
            flag = 1;
            break;
        }
       
    }
    if(flag=1)
    {
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
}