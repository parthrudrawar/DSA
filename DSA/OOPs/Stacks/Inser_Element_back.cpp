#include<iostream>
#include<stack>
using namespace std;
//https://bit.ly/34qqmGL
void Insert_bottom(stack<int>& input,int num){
    if(input.empty()){
        input.push(num);
        return;
    }
    int k=input.top();
    input.pop();
    Insert_bottom(input,num);
    input.push(k);

}
int main() {
    stack<int> input;
    int size;
    cout<<"Enter the sno of element u want to insert in stack:"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        input.push(x);
    }
    int num;
    cout<<"Enter the number you want to insert:"<<endl;
    cin>>num;
    Insert_bottom(input,num);
    for(int i=0;i<=size;i++){
        cout<<input.top();
        input.pop();
    }
  
    return 0;
}