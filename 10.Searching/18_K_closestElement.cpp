#include<iostream>
#include<vector>
using namespace std;

vector<int> findClosest(vector<int>& arr, int k, int x) {
    int l = 0;
    int h = arr.size() - 1;

    while (h - l >= k) {
        if (x - arr[l] > arr[h] - x) {
            l++;
        } else {
            h--;
        }
    }
    
    // Create the result vector to store the closest elements

    // vector<int> ans(arr.begin() + l, arr.begin() + h + 1);
    // return ans;

    vector<int>ans;
    for(int i = l;i <= h;i++)
    {
        ans.push_back(arr[i]);
    }
    return ans;
}

int main() {
    int k = 4;
    int x = 35;

    vector<int> arr{12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};

    vector<int> ans = findClosest(arr, k, x);

    // Print the elements of the returned vector
    cout << "Closest " << k << " numbers to " << x << ": ";
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;


    return 0;
}

