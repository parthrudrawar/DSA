#include<iostream>
#include<stack>
using namespace std;
// https://bit.ly/3snpr1B
void sorted(stack<int>& input, int num) {
    // Base case: If the stack is empty, or if the top element is smaller than num,
    // just push num onto the stack
    if (input.empty() || input.top() < num) {
        input.push(num);
        return;
    }
    
    // Otherwise, we need to recursively pop elements until we find the correct position to insert num
    int top = input.top();
    input.pop();
    sorted(input, num);
    
    // After returning from the recursion, push the top element back onto the stack
    input.push(top);
}

void sort(stack<int>& input){
    if(input.empty()){
        return;
    }
    int num=input.top();
    input.pop();

   sort(input);
    sorted(input,num);

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
    sort(input);
    
    for(int i=0;i<size;i++){
        cout<<input.top();
        input.pop();
    }
  
    return 0;
}