bool comp(pair<string, int>&p1, pair<string, int>& p2){
    if(p1.second==p2.second)
        return p1.first<p2.first;
    return p1.second>p2.second;
}

class Solution {
public:
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int>mp;
        
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
        
        vector<pair<string,int>>vect;
        
        for(auto i:mp){
            vect.push_back(make_pair(i.first,i.second));
        }
        
        sort(vect.begin(),vect.end(),comp);
        
        vector<string>str;
        
        for(int i=0;i<k;i++){
            str.push_back(vect[i].first);
        }
        
        return str;
    }
};


