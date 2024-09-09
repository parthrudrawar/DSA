#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,3,5,7,9};
    int n=sizeof(arr)/sizeof(int);
    int s=0;
    int e=n;
    while(s<=e){
        int temp=arr[s];
        arr[e]=arr[s];
        arr[s]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}