#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr1[8]={1,3,5,7,9,0,0,0};
    int arr2[3]={2,4,6};
    int i=0,j=0;
    while(i<8 && j<3){
        if(arr1[i]==0){
            i++;
            arr1[i]=arr2[j];
            j++;
        }
    }
    
   sort(arr1,arr1+8);
    for(int i=0;i<8;i++){
        cout<<arr1[i];
    }
    
    return 0;
}