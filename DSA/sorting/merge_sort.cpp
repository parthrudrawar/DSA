#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    int left=low;
    int right=mid+1;
    int  temp[high-low+1];
    int index=0;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
         temp[index]=arr[left];
         index++;
         left++;   
        }else{
           
                temp[index]=arr[right];
                right++;
                index++;
            
        }
    }
    while(left<=mid){
         temp[index]=arr[left];
         index++;
         left++;
    }
    while(right<=high){
          temp[index]=arr[right];
          right++;
          index++;
         
    }
     for(int i=low;i<high+1;i++){
            arr[i]=temp[i-low];
          }
}
void mergearr(int arr[],int low,int high){
   if(low>=high)return;
   int mid=(low+high)/2;
   mergearr(arr,low,mid);
   mergearr(arr,mid+1,high);
   merge(arr,low,mid,high);

}
int main() {
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergearr(arr,0,n-1);
    cout<<"Sorted array:";
     for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}