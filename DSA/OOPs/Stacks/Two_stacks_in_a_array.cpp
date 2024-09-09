#include<iostream>
using namespace std;
class Stacks{
    public:
    int *arr;
    int size;
    int top1;
    int top2;
    Stacks(int s){
        this->size=s;
        top1=-1;
        top2=s;
        arr=new int[s];
    }
    void push1(int num){
        if(top2-top1>1){
            top1++;
            arr[top1]=num;
            
        }else{
            cout<<"Stack has overflowed"<<endl;
        }
    }
     void push2(int num){
        if(top2-top1>1){
            top2--;
            arr[top2]=num;
            
        }else{
            cout<<"Stack has overflowed"<<endl;
        }
    }
    void pop1(){
       
        if (top1 >= 0) {
            top1--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }
     void pop2(){
       
        if (top2 <= size) {
            top2++;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }
    int peek1()
    {
        if (top1 >= 0 && top1 < size)
        {
            return arr[top1];
        }
        else
        {
            cout << "Not a valid size." << endl;
            return -1;
        }
    }
    int peek2()
    {
        if (top2 >= 0 && top2 < size)
        {
            return arr[top2];
        }
        else
        {
            cout << "Not a valid size." << endl;
            return -1;
        }
    }
     bool iseppty()
    {
        if (top1 == 1 || top2==size)
            return true;
        else
            return false;
    }
};  
int main() {
   Stacks st(5);
    st.push1(5);
    st.push2(1);
    st.push1(4);
    st.push2(2);
    st.push1(3);
    cout<<st.peek2()<<endl;
    return 0;
}