class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int>m1;
        
        int n=s.length();
        
        
        for(int i=0;i<n;i++){
            m1[s[i]]+=1;
        }
    
        for(int i=0;i<t.length();i++){
            m1[t[i]]-=1;
        }
        
        int count=0;
        
        for(int i=0;i<n;i++){
            if(m1[s[i]]==0){
                count++;
            }
        }
        
        if(count==t.length() && s.length()==t.length())  {
            return true ;}
      
        
        
        
        
     return false;   
    }
};