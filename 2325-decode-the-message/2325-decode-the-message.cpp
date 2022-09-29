class Solution {
public:
    string decodeMessage(string key, string message) {
        
        unordered_map<char,char>m1;
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        m1[' ']=' ';
        int index=0;
        
        for(int i=0;i<key.size();i++){
            if(m1[key[i]]==0){
                m1[key[i]]=alphabet[index];
                index++;
            }
        }
        
        for(int i=0;i<message.size();i++){
            message[i]= m1[message[i]];
        }
        
        return message;
    }
};

