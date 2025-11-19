class Solution {
public:
int ans=INT_MAX;
void recur( vector<int>&nums,int start,int k,vector<int>&v)
{
    if(start==nums.size())
    {
             int maxm=INT_MIN;

        for(int i=0;i<k;i++)
        {
            maxm=max(maxm,v[i]);
        }
        ans=min(maxm,ans);
        return;
    }
    for(int i=0;i<k;i++)
    {
        v[i]+=nums[start];
        recur(nums,start+1,k,v);
        v[i]-=nums[start];
    }
}
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int>v(k,0);
        recur(cookies,0,k,v);
        return ans;
    }
};