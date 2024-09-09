#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the size of first array: ";
    cin >> n;
    cout << "Enter the size of second array: ";
    cin >> m;
    
    int arr[n], brr[m];
    cout << "Enter first array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i]; 

    cout << "Enter second array elements: ";
    for (int j = 0; j < m; j++) cin >> brr[j];

    int i = n - 1, j = m - 1, carry = 0;
    vector<int> ans;

    while (i >= 0 && j >= 0) {
        int sum = arr[i] + brr[j] + carry;
        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while (i >= 0) {
        int sum = arr[i] + carry;
        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
        i--;
    }

    while (j >= 0) {
        int sum = brr[j] + carry;
        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
        j--;
    }

    while (carry > 0) {
        int sum = carry;
        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
    }

    cout << "Sum of arrays: ";
    for (int k = ans.size() - 1; k >= 0; k--) {
        cout << ans[k];
    }
    cout << endl;

    return 0;
}
