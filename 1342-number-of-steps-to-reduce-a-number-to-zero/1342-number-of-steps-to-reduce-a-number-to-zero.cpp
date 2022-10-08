class Solution {
public:
    int count =0;
    int numberOfSteps(int num) {
        
        if (num==0){
            count+=0;
             }
        else if(num%2==0){
            count+=1;
            numberOfSteps(num/2);
        }
        
        else{
            count+=1;
            numberOfSteps(num-1);
        }
        
     return count ;  
    }
};