// Given a string s, find the length of the longest 
// substring
//  without repeating characters.




//  class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         vector<int> arr(256, 0); 
//         int maxLength = 0;
//         int left = 0;
        
//         for (int right = 0; right < s.size(); right++) {
//             char c = s[right];
//             int index = c; 
//             arr[index]++;
            
//             while (arr[index] > 1) {
//                 char leftChar = s[left];
//                 int leftIndex = leftChar;
//                 arr[leftIndex]--;
//                 left++;
//             }
            
//             maxLength = max(maxLength, right - left + 1);
//         }
        
//         return maxLength;
//     }
// };
