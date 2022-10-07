class Solution {
public:
    vector<int> constructRectangle(int area) {
        
        vector<int>factor;
        vector<int>ans;
        
        for(int i=1;i<=area;i++){
            if(area%i==0){
                factor.push_back(i);
            }
        }
        
        int i=0;
        int j=factor.size()-1;
        int sum = factor[i]+factor[j];
        
        while(i<j){
            if(sum>=factor[i]+factor[j]){
                sum=min(sum,factor[i]+factor[j]);
                i++;
                j--;
            }
        }
        ans.push_back(factor[i]);
        ans.push_back(factor[j]);
        
        return ans;
    }
};