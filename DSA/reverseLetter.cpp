#include<iostream>
using namespace std;
void reverse(string& s,int i,int j){
    if(i>j)return;
    swap(s[i],s[j]);
    i++;
    j--;
   reverse(s,i,j);
}
int main() {
    cout<<"Enter the string"<<endl;
    string s;
    cin>>s;
    reverse(s,0,s.length()-1);
    cout<<s;
    return 0;
}