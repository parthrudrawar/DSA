#include <iostream>
using namespace std;
class Stack
{
public:
    int size;
    int *arr;
    int top;
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Space not availiable." << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
        else
        {
            cout << "Not a valid size." << endl;
        }
    }
    bool isempty()
    {
        if (top == 1)
            return true;
        else
            return false;
    }
};
int main()
{
    Stack st(5);  
    st.push(5);
    st.push(3);
    st.push(1);
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    return 0;
}