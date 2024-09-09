#include<iostream>
using namespace std;
int main() {
    int row;
    cout<<"Enter number of rows:"<<endl;
    cin>>row;
    int* cols=new int[row];
    int** arr=new int*[row];
    for(int i=0;i<row;i++){
        int col;
        cout<<"Enter number of colom in"<<i+1<<"row:"<<endl;
        cin>>col;
        cols [i]=col;
         arr[i]= new int [col];

    }
    //input
    for(int i=0;i<row;i++){
        for(int j=0;j<cols[i];j++){
             cout<<"Enter "<<i+1<<","<<j+1<<"element:";
             cin>>arr[i][j];
        }cout<<endl;
    }
    //output
     for(int i=0;i<row;i++){
        for(int j=0;j<cols[i];j++){
            cout<<arr[i][j];
        }cout<<endl;
    }
    //relese memory
   for(int i = 0; i < row; i++) {
        delete [] arr[i];
    }
    delete [] arr;
    delete [] cols;
}