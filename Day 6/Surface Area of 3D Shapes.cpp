class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {int n=0;int sk=0;
    for(int i=0;i<grid.size();i++)
    {
        for(int j=0;j<grid[0].size();j++)
        {
            for(int k=0;k<grid[i][j];k++)
            {
                if(k==0){sk++;}
                if(k==(grid[i][j]-1)){sk++;}
                if(i==0){sk++;}
                else{if(k>(grid[i-1][j]-1))sk++;}
                if(i==grid.size()-1){sk++;}
                else{if(k>(grid[i+1][j]-1))sk++;}
                 if(j==0){sk++;}
                else{if(k>(grid[i][j-1]-1))sk++;}
                if(j==grid[0].size()-1){sk++;}
                else{if(k>(grid[i][j+1]-1))sk++;}
                
                
            
            
            }
        }
    }return sk;
                                               
        
    }
};
