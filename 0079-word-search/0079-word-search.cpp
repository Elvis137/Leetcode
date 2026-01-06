class Solution {
public:
int recur(vector<vector<char>>&mat,string &word,int i,int j,int k,vector<vector<int>>&v)
{
    
    if(word.length()==k)return 1;
    if(i>=mat.size()||i<0||j>=mat[0].size()||j<0||word[k]!=mat[i][j])return 0;
    char temp=mat[i][j];
    mat[i][j]='#';
    for(int t=0;t<4;t++)
    {
    if (recur(mat, word, i + v[t][0], j + v[t][1], k + 1,v)) {
            mat[i][j] = temp;   
            return 1;
        }    }
    mat[i][j]=temp;
    return 0;
}
    bool exist(vector<vector<char>>& board, string word) {
        int len=word.length();
        int n=board.size();
        int m=board[0].size();
         vector<vector<int>>v={{1,0},{0,1},{-1,-0},{0,-1}};

        if(len>m*n)return false;


        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[0])
                {
                    if(recur(board,word,i,j,0,v))return true;
                }
            }
        }
        return false;
        
    }
};