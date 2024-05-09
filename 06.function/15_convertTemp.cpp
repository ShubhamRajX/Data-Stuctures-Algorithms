#include<iostream>
using namespace std;

double convertTemp(double n)
{
    double k = n + 273.15;
    double f = n * 1.80 + 32.00;

    cout<<k<<endl;
    cout<<f<<endl;
}

int main()
{
    double n;
    cout<<"Enter number:- ";
    cin>>n;

    double result = convertTemp(n);

}




// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter number:- ";
//     cin>>n;

//     // double k;
//     // double f;

//     double k = n + 273.15;
//     double f = n * 1.80 + 32.00;

//     cout<<k<<endl;
//     cout<<f<<endl;
// }




// #include<iostream>
// #include<vector>
// using namespace std;

// double convertTemp(vector<double>arr)
//     {
//         double celsius;

//         double k = celsius + 273.15;
//         double f = celsius * 1.00 + 32.00;

//         vector<double> arr;
//         arr.push_back(k);
//         arr.push_back(f);

//         return arr;
//     }

// int main()
// {
//     double n;
//     cin>>n;
//     cout<<"Enter nmber:-";
    
//     vector<double>arr(n);

//     for(int i=0;i<n;i)
//     {
//         cin>>arr[i];
//     }
    
// double result = convertTemp(arr);

// cout<<result;
// }


