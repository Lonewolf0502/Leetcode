class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int l=s.size();
        
        int start=0;
        int end=l-1;
        
        while(start<end){
            swap(s[start++],s[end--]);
        }

    }
};