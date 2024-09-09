#include<iostream>
using namespace std;
int main() {
    int row;
    cout<<"Enter number of rows"<<endl;
    cin>>row;
    int col;
     cout<<"Enter number of coloms"<<endl;
     cin>>col;
     int **arr=new int*[row];
     for(int i=0;i<col;i++){
        arr[i]=new int[col];
     }
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
     }
      for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j];
        }cout<<endl;
     }
     //release memory
     for(int i=0;i<row;i++){
        delete []arr[i];
     }
     delete []arr;
    return 0;
}