/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
class Solution {
    public:
        vector<int> dp;
        int house(vector<int> arr , int i)
        {
            if(i>=arr.size()) return 0;
            if(arr.size()==1) return arr[i];
            if(arr.size()==2) return max(arr[i],arr[i+1]);
            if(dp[i]!=-1) return dp[i];
            return dp[i] = max(arr[i] + house(arr,i+2) , 0 + house(arr,i+1)); 
        }
        int rob(vector<int>& nums) {
            dp.clear();
            dp.resize(406,-1);
            return house(nums,0);
        }
    };
// @lc code=end

