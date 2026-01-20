class Solution {
public:
// int recur(vector<int>nums,int i){
//     if(i>=nums.size())return 0;
//    for(int i=0;i<nums.size();i++)
//    {
//     recur(nums,i+)
//    }
// }
    int jump(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> dp(n, INT_MAX);

        dp[0] = 0;  
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (j+nums[j]>=i)  {
                    dp[i] = min(dp[i], dp[j] + 1);
                }
            }
        }
        return dp[n - 1] == INT_MAX ? -1 : dp[n - 1];
    }
};