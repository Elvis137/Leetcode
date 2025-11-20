class Solution {
public:
void recur(vector<int>& nums,int st,vector<int>&v,vector<vector<int>> &ans)
{
    ans.push_back(v);

    for(int i=st;i<nums.size();i++)
    {
        if(i!=st&&nums[i]==nums[i-1]) continue;
        v.push_back(nums[i]);
        recur(nums,i+1,v,ans);
        v.pop_back();
        }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int>v;
        sort(nums.begin(),nums.end());
        recur(nums,0,v,ans); 
        return ans;
    }
};