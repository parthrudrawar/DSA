#include<iostream>
using namespace std;
void del(string& str, char k) {
    string ans;
    for (char c : str) {
        if (c != k) {
            ans += c;
        }
    }
    str = ans;
}
int main() {
    string str;
    getline(cin,str);
    for(int i=0;i<str.length()-1;i++){
       
        if(str[i]==str[i+1]){
            
            del(str,str[i+1]);
         //i=i-2;
         i--;
      }  
    }
    cout<<"final string:"<<str;
    return 0;
}
//abbac
//aac
//c