#include<iostream>
using namespace std;
void saynumber(int n,string digit[]){
       if (n == 0) // Termination condition
        return;
    int digt=n%10;
    n=n/10;
    saynumber(n,digit);
    cout<<digit[digt];
}
int main() {
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    string digit[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<"the number is:";
    saynumber(num,digit);
    return 0;
}