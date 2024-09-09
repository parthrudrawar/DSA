#include<iostream>
#include<string.h>
using namespace std;
void reverse(string& str){
int s=0;
int e=str.length()-1;
while(s<e){
    swap(str[s], str[e]);
    s++;
    e--;
}

}
int main() {
    string s;
    cout<<"Enter the array:";
    cin>>s;
    cout<<"length of string is :"<<s.length()<<endl;
    reverse(s);
    cout<<"reversed string:"<<s<<endl;
    return 0;
}