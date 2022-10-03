class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int>ans;
        int n=nums.size();
        int z;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[j] < nums[i] && j != i) z++;
            }
            ans.push_back(z);
            z=0;
        }
      return ans;  
    }
};