#include<iostream>
#include<string>
#include<stack>
using namespace std;
//https://bit.ly/34kxPaq
bool match(char ch,char top){
    if((ch=='{'&&top=='}')||
    (ch=='('&&top==')')||
    (ch=='['&&top==']')){
        return true;
    }else{
        return false;
    }
}
bool check(string input,stack<char>s){
 for(int i=0;i<input.size();i++){
        char ch=input[i];
        //check if opening bracket if yes then push back stach
        //if not then check and pop
        if(ch=='('||ch=='{'||ch=='['){
            s.push(ch);
        }else{
            if(!s.empty()){
                char top=s.top(); 
                if(match(ch,top)){
                    s.pop();
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
    }
    if(s.empty()){
        return true;
    }else{
        return false;
    }

 
}
int main() {
    string input="{([])}";
    stack<char>s;
    cout<< check(input,s);
      return 0;
}