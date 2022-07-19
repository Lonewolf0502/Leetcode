class Solution {
public:
    double average(vector<int>& salary) {
        double sum1 = *max_element(salary.begin(),salary.end())+*min_element(salary.begin(),salary.end());
        
        int sum=0;
        for(int i=0;i<salary.size();i++) sum=sum+salary[i];
        
        double avg;
        
        if(salary.size()==3) {
            avg=sum-sum1;
        }
        else{
            avg= (sum -sum1)/(salary.size()-2);
        }
        
        return avg;
    }
};