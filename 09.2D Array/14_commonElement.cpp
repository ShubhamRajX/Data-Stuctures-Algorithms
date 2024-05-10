#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
    vector<int>arr{1,2,3,4,5,6};
    int size1 = 6;
    vector<int>brr{3,4,5,6,7,8};
    int size2 = 6;
    vector<int>crr{0,1,2,3,4,5};
    int size3 = 6;

    vector<int>ans;
    set<int>st;

    int i,j,k;
    i=j=k=0;

    while(i<size1 && j<size2 && k<size3)
    {
        if(arr[i] == brr[j] && brr[j] == crr[k])
        {
            //ans.push_back(arr[i]);
            st.insert(arr[i]);
            i++; j++; k++;
        }
        else if(arr[i] < brr[j])
        {
            i++;
        }
        else if(brr[j] < crr[k])
        {
            j++;
        }
        else{
            k++;
        }
    }
    for(auto value : st)
    {
        cout<<value <<", ";
    }    
}         
                