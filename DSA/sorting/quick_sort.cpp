#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int partition(int arr[],int low,int high){
    int pivort=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivort&&i<=high-1){//to find first number greater than pivort
            i++;
        }
        while(arr[j]>pivort&&j>=low+1){//to find first number smaller than pivort
            j-- ;
        }
        if(i<j)swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(int arr[],int low,int high){
    if(low<high){
    int pIndex=partition(arr,low ,high);
    quicksort(arr,low,pIndex-1);
    quicksort(arr,pIndex+1,high);
    }
}
int main() {
        int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<"Sorted array:";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}