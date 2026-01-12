class Solution {
public:


void recur(vector<int>&nums,vector<int>&v,set<vector<int>>&s,vector<int>&a)
{
    if(v.size()==nums.size())
    {
        s.insert(v);
        return;
    }
    for(int i=0;i<nums.size();i++)

    {
        if(!a[i])
        {
            //if(v[v.size()-1]!=nums[i]){
            a[i]=1;
            v.push_back(nums[i]);
            recur(nums,v,s,a);
            a[i]=0;
            v.pop_back();
           // }

        }

    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         vector<vector<int>>ans;
         sort(nums.begin(),nums.end());
        vector<int>a(nums.size(),0);
        vector<int>v;
        set<vector<int>>s;
        recur(nums,v,s,a);
        for(auto i:s)
        {
            ans.push_back(i);
            
        }
        return ans;
        
    }
};