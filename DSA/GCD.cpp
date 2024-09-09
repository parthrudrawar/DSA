#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0)return b;
    if(b==0)return a;
  
        if(a>b) gcd(a-b,b);
        else gcd(a,b-a);
    
}
int main() {
    int a,b;
    cout<<"Enter the teo numbers:"<<endl;
    cin>>a>>b;
 
    cout<<"Greatest common divisor of "<<a <<"and "<<b <<"is:"<<gcd(a,b)<<endl;
    return 0;
}