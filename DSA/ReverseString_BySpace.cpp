#include<iostream>
using namespace std;

void reverse(string& str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    string str;
    cout << "Enter the string: " << endl;
    getline(cin, str);
    
    int start = 0;
    int end = 0;
    while (end <= str.length()) {
        if (str[end] == ' ' || str[end] == '\0') {
            reverse(str, start, end - 1);
            start = end + 1;
        }
        end++;
    }
    
    cout << "Reverse string is: " << str << endl;
    
    return 0;
}
