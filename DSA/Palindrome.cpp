#include <iostream>
#include <cctype> // For tolower() function
using namespace std;

bool is_palindrome(string s) {
    // Convert the string to lowercase
    for (char &c : s) {
        c = tolower(c);
    }
    // Remove non-alphanumeric characters
    string clean_string = "";
    for (char c : s) {
        if (isalnum(c)) {
            clean_string += c;
        }
    }
    // Check if the string is equal to its reverse
    string reversed_string = string(clean_string.rbegin(), clean_string.rend());
    return clean_string == reversed_string;
}

int main() {
    string input_string;
    cout << "Enter a string: ";
    getline(cin, input_string);
    if (is_palindrome(input_string)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}
