class Solution {
public:
    int countOdds(int low, int high) {
        
        int x=0;
        for(int i=low;i<=high;i++){
            if(i%2!=0) x++;
            else continue;
        }
        
        return x;
        
    }
};