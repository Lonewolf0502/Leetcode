class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        vector<int> map(128, 0);
        
        int count = 0;  
        
        for (char& character : J) map[character]++;
        
        for (char& character : S) if (map[character]) count++; 
        
        
        return count;
    }
};