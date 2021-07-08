class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        if(mat==target)return true;int n=mat.size();int c1=1,c2=1,c3=1;
        for(int i=0;i<mat.size();i++)
    {
        for(int j=0;j<mat.size();j++)
        {
            if(mat[i][j]!=target[j][n-i-1])
              c1=0;
        }
    }   
     for(int i=0;i<mat.size();i++)
    {
        for(int j=0;j<mat.size();j++)
        {
            if(mat[i][j]!=target[n-i-1][n-j-1])
              c2=0;
        }
    }   
        for(int i=0;i<mat.size();i++)
    {
        for(int j=0;j<mat.size();j++)
        {
            if(mat[i][j]!=target[n-j-1][i])
              c3=0;
        }
    }  
           
    c1=c1+c2+c3;
       if(c1!=0) return true;
       else return false;
    }
};
