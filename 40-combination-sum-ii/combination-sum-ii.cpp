class Solution {
public:
void recur(vector<int>&candidates, int tar,int curInd,   vector<vector<int>>&ans,vector<int>&v)
{
    if(curInd>candidates.size()||tar<0)return;
    if(tar==0){ans.push_back(v);
    return;}
     for(int i = curInd; i < candidates.size(); i++){
    {
        if (i > curInd && candidates[i] == candidates[i - 1])continue;

        v.push_back(candidates[i]);
       
        recur(candidates,tar-candidates[i],i+1,ans,v);
        v.pop_back();
       
    }
     }
    
    return;
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
          vector<vector<int>>ans;
        vector<int>v;
        sort(candidates.begin(),candidates.end());
        recur(candidates,target,0,ans,v);
       
        return ans;
    }
};