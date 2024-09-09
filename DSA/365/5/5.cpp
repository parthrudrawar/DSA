// There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

// Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

// Note that multiple kids can have the greatest number of candies




// class Solution {
// public:
//     vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
//         // int mx = *max_element(candies.begin(), candies.end());
//         int mx = INT_MIN;
//         for(auto it: candies){
//             if(it>mx)
//                 mx = it;
//         }
//         int n = candies.size();
//         vector<bool> ans(n, false);
//         for(int i=0; i<n; i++){
//             if(candies[i]+extraCandies>=mx)
//                 ans[i] = true;
//         }
//         return ans;
//     }
// };