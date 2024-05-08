#include<iostream>
#include<vector>
using namespace std;


vector<int> spiralOrder(vector<vector<int>>& matrix) 
{
    vector<int> ans;

    int m = matrix.size();
    int n = matrix[0].size();
    int totalElement = m * n;

    int startingRow = 0;
    int endingCol = n - 1;
    int endingRow = m - 1;
    int startingCol = 0;
    int count = 0;

    while (count < totalElement) 
    {
        // Print startingRow
        for (int i = startingCol; i <= endingCol && count < totalElement; i++) {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;
        // Print endingCol
        for (int i = startingRow; i <= endingRow && count < totalElement; i++) 
        {
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;
        // Print endingRow
        for (int i = endingCol; i >= startingCol && count < totalElement; i--) {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;
        // Print startingCol
        for (int i = endingRow; i >= startingRow && count < totalElement; i--) {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
    
}

int main()
{
    int row ;
    int col ;

    cout<<"No. of Rows:-"<<endl;
    cin>>row;

    cout<<"No. of Cols:-"<<endl;
    cin>>col;

    vector<vector<int> > arr(row, vector<int>(col));

    cout<<"Enter matrix element: "<<endl;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Spiral Matrix:-"<<endl;
    
    vector<int> result = spiralOrder(arr);
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
}