class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int r[m],c[n];
        for(int i=0;i<m;i++)
        {int min=100001;
         for(int j=0;j<n;j++)
         {
           if(min>matrix[i][j])
            min=matrix[i][j];
           }r[i]=min;
        }
      for(int j=0;j<n;j++)
       {
          int max=-1;
      for(int i=0;i<m;i++)
       {
          if(max<matrix[i][j])
          max=matrix[i][j];
       }  
        c[j]=max;
                                                                    
         }
        vector<int>a;
       for(int i=0;i<m;i++)
     {
      for(int j=0;j<n;j++)
    {
          if(r[i]==c[j])
        a.push_back(matrix[i][j]);
      }
       
     }
        return a;
                                                            
        
    }
};
