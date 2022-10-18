class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        set<int>alphabets;
        
        for(int i=0;i<sentence.length();i++){
            char c= sentence[i];
            
            alphabets.insert(c);
        }
        
        return alphabets.size()==26;

    }
};