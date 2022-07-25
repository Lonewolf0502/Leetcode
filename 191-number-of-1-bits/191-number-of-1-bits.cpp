class Solution {
public:
    int hammingWeight(uint32_t n) {
       
       int countOne=0;
       while(n){
           n=n&(n-1);
           countOne++;
       } 
        
        return countOne;
    }
};