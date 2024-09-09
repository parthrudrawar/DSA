// For two strings s and t, we say "t divides s" if and only if s = t + t + t + ... + t + t (i.e., t is concatenated with itself one or more times).

// Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.




// class Solution {
// public:
//     string gcdOfStrings(string str1, string str2) {
//        string temp_ans = "", res = "";
//     bool got = false;

//     for(int i = 0; i < min(str1.size(), str2.size()); i++)
//     {
//         temp_ans += str1[i];

//         int rep1 = str1.size() % temp_ans.size() == 0 ? str1.size() / temp_ans.size() : 0;

//         string temp1 = "";
//         while(rep1--)
//             temp1 += temp_ans;

//         int rep2 = str2.size() % temp_ans.size() == 0 ? str2.size() / temp_ans.size() : 0;
//         string temp2 = "";
//         while(rep2--)
//             temp2 += temp_ans;

//         if (temp1 == str1 and temp2 == str2)
//         {
//             got = true;
//             res = max(res, temp_ans);
//         }
//     }

//     if (!got) return "";
//     else return res;
  
// }
// };