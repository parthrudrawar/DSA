#include<iostream>
using namespace std;
int compress(string& str,int n){
    int i=0;
    int ansindex=0;
    int count=0;
    char arr[26]={0};
    while(i<n){
    int j=i+1;
        while(j<n && str[i]==str[j]){
            j++;
        }
        //aab to ya to nya charecter aa gya hoga nhi to string kjhatam ho gye hogi
        arr[ansindex++]=str[i];
        count=j-i;
        if(count>1){
        string num = to_string(count);
        for(char ch:num){
            arr[ansindex++]=ch;
        }
       
        }  i=j;
    }
    cout<<"final ans is:"<<arr;
}
int main() {
    string str;
    cout<<"ENter the string:"<<endl;
    getline(cin,str);
    compress(str,str.length());
    return 0;
}
//aabbccd
//a2b2d