#include<iostream>
#include<vector>
using namespace std;
int main() {
    int row;
    int col;
    vector<int>ans;
    cout<<"Enter the number of rows and colomb in matrix:"<<endl;
    cin>>row;
    cin>>col;
    int matrix[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }cout<<endl;
    }
    int count=0;
    int total=row*col;
    int StartingRow=0;
    int StartingCol=0;
    int EndingRow=row-1;
    int EndingCol=col-1;
    
    while(count<total){
        //print starting row
        for(int index=StartingCol;count<total && index<EndingCol;index++){
            ans.push_back(matrix[StartingRow][index]);
            count++;
        } StartingRow++;
        //print ending col
        for(int index=StartingRow;count<total && index<EndingRow;index++){
            ans.push_back(matrix[EndingCol][index]);
            count++;
        }EndingCol--;
        //print ending row
        for(int index=EndingCol;count<total && index>=StartingCol;index++){
            ans.push_back(matrix[EndingRow][index]);
            count++;
        }EndingRow--;
        //print staring col
        for(int index=EndingRow;count<total && index>=StartingRow;index++){
            ans.push_back(matrix[index][StartingRow]);
            count++;
        }StartingCol++;
    }
    cout << "Final Result: ";
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}   