#include <queue>
#include <vector>
using namespace std;

int sign(int a, int b) {
    if (a == b) return 0;
    if (a > b) return 1;
    if (a < b) return -1;
}

void callMedian(int element, priority_queue<int>& maxHeap, priority_queue<int, vector<int>, greater<int>>& minHeap, int& median) {
    switch (sign(maxHeap.size(), minHeap.size())) {
        case 0:
            if (element > median) {
                minHeap.push(element);
                median = minHeap.top();
            } else {
                maxHeap.push(element);
                median = maxHeap.top();
            }
            break;
        case 1:
            if (element > median) {
                minHeap.push(element);
                median = (minHeap.top() + maxHeap.top()) / 2;
            } else {
                minHeap.push(maxHeap.top());
                maxHeap.pop();
                maxHeap.push(element);
                median = (minHeap.top() + maxHeap.top()) / 2;
            }
            break;
        case -1:
            if (element > median) {
                maxHeap.push(minHeap.top());
                minHeap.pop();
                minHeap.push(element);
                median = (minHeap.top() + maxHeap.top()) / 2;
            } else {
                maxHeap.push(element);
                median = (minHeap.top() + maxHeap.top()) / 2;
            }
            break;
    }
}

vector<int> findMedian(vector<int>& arr, int n) {
    vector<int> ans;
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int median = -1;
    for (int i = 0; i < n; i++) {
        callMedian(arr[i], maxHeap, minHeap, median);
        ans.push_back(median);
    }
    return ans;
}
