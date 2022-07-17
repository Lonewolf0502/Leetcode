class Solution {
public:
     int pivotIndex(vector<int>& nums) {
        int sum = 0, leftsum = 0;
        for (int x=0;x<nums.size();x++) sum += nums[x];
        for (int i = 0; i < nums.size(); ++i) {
            if (leftsum == sum - leftsum - nums[i]) return i;
            leftsum += nums[i];
        }
        return -1;
    }
};