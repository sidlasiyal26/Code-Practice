class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> m;
        for(int i=0;i<indices.size();i++){
            m[indices[i]]=s[i];
        }string s1;
         for(int i=0;i<indices.size();i++){
             s1.push_back(m[i]);
             
         }
        return s1;
        
    }
};
