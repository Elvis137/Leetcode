class Solution {
public:
    int numDecodings(string s) {
        if(s.size()<1)return s.size();
        vector<int>dp(s.size()+1,0);
        dp[0]=1;
        if(s[0]=='0')return 0;
        else dp[1]=1;
        for(int i=2;i<=s.size();i++)
        {
            int one=s[i-1]-'0';
            int two=stoi(s.substr(i-2,2));
            if(one>=1)dp[i]+=dp[i-1];
            if(two>=10&&two<=26)dp[i]+=dp[i-2];
        }
        return dp[s.size()];
        
        
    }
};