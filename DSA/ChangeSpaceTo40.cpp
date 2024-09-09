#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter the string:" << endl;
    getline(cin, s);

    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            temp.push_back(1); // Pushing ASCII value 1
            temp.push_back(4); // Pushing ASCII value 4
            temp.push_back(32); // Pushing ASCII value 32 (space)
        } else {
            temp.push_back(s[i]);
        }
    }

    cout << "Modified string is: " << temp << endl;
    return 0;
}




//with space complexcity 1

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter the string:" << endl;
    getline(cin, s);

    int n = s.length();
    int space_count = 0;

    // Count the number of spaces
    for (int i = 0; i < n; i++) {
        if (s[i] == ' ') {
            space_count++;
        }
    }

    // Calculate the new length of the string after adding extra characters
    int new_length = n + 2 * space_count;

    // Start from the end of the new string
    s.resize(new_length);

    // Replace spaces with '%20' from the end of the string
    for (int i = n - 1, j = new_length - 1; i >= 0; i--) {
        if (s[i] == ' ') {
            s[j--] = '0';
            s[j--] = '2';
            s[j--] = '%';
        } else {
            s[j--] = s[i];
        }
    }

    cout << "Modified string is: " << s << endl;
    return 0;
}
