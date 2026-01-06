class Solution {
public:
void recur(vector<int>arr, int tar,int i,set<vector<int>>&s,vector<int>&v)
{
    if(i>=arr.size()||tar<0)return;
    if(tar==0){s.insert(v);
    return;}
    if(arr[i]<=tar)
    {
        v.push_back(arr[i]);
        recur(arr,tar-arr[i],i+1,s,v);
        recur(arr,tar-arr[i],i,s,v);
        v.pop_back();
        recur(arr,tar,i+1,s,v);
    }
    return;


}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        set<vector<int>>s;
        vector<vector<int>>ans;
        vector<int>v;
        sort(candidates.begin(),candidates.end());
        recur(candidates,target,0,s,v);
        for(auto i:s)
        {
            ans.push_back(i);
        }
        return ans;
    }
};