class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>duplicate(nums);
        int n=nums.size();
        int temp;
        
        for(int i=0;i<n;i++){
            temp=nums[i];
            duplicate.push_back(temp);
            
        }
        
       return duplicate; 
    }
};