#include<iostream>
using namespace std;
bool check(int a[26],int b[26]){
    for(int i=0;i<26;i++){
        if(a[1]!=b[i]){
            return false;
        }
      
    }  return true;
}
int main() {
      string s1;
      getline(cin,s1);
      string s2;
      getline(cin,s2);
      //character count array
      int count[26]={0};
      for(int i=0;i<26;i++){
        int index=s1[i]-'a';
        count[index]++;
        }
        //traverse s2 string in window pf size s1 and compare
        int i=0;
        int count2[26]={0}; 
        int windowsize=s1.length();
        while(i<windowsize){
            int index=s2[i]-'a';
            count2[index]++;
            i++;
        }
        if(check(count,count2)){
            cout<<"Yes";
            return 0;
        }
        // window ko aage bdao
        while(i<s2.length()){
            char newchar=s2[i];
            int index =newchar-'a';
            count2[index]++;
          char old =s2[i-windowsize];
          index=old-'a';
          count2[index]--;
          i++;
          if(check(count,count2))
          return 1;
          cout<<"yes";
          return 0;
        }
        cout<<"no";
    return 0;
}