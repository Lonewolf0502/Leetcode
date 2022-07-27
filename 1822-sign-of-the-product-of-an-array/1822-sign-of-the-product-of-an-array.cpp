class Solution {
public:
    int arraySign(vector<int>& nums) {
      int n = nums.size(), neg = 0, zero = 0;
    
    for(int i=0; i<n; i++)
    {
        if(nums[i] < 0) neg++;
        else if(nums[i] == 0) zero++;
    }
    
    if(zero > 0) return 0;
    
    else if( neg % 2 == 0) return 1;
    
    else return -1;
    
}

};