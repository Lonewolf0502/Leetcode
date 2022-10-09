class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<pair<int,int>>ans;
        
        
        for(int k=0;k<nums.size();k++){
            ans.push_back({nums[k],k});
        }
        
        int i=0;
        int j=ans.size()-1;
        int idx1=0;
        int idx2=0;
        
        
        sort(ans.begin(),ans.end());
        
        
        
        while(i<j){
            if(ans[i].first+ans[j].first==target){
                idx1=ans[i].second;
                idx2=ans[j].second;
                break;
            } 
            if(ans[i].first+ans[j].first<target){
                i++;
            }
            if(ans[i].first+ans[j].first>target){
                j--;
            }
            
            
        }
             
       return {idx1,idx2};
    }
};



