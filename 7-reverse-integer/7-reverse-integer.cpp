class Solution {
public:
    int reverse(int x) {
        
        long long int reverse=0;
        
        if(x>0){
            
        while(x>0){
            reverse=reverse*10+x%10;
            x=x/10;
        }
            
        }
        
        else {
            
            long long int y=abs(x);
            while(y>0){
            reverse=reverse*10+y%10;
            y=y/10;
            }
            reverse=(-1)*reverse;
               
        }
        
        if(reverse > INT_MAX || reverse <INT_MIN)
        {
            return 0;
        }
        return reverse;
        
    }
};