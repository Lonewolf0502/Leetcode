/*Intuition :

n = 1: return 1 is the base case
n = 2: return count of last entry i.e. 1 1
n = 3: return count of last entry i.e. two 1's so 21
n = 4: we have one 2 and one 1 so 1211
n = 5: , we have one 1 and one 2 and two 1's so -> 111221
n = 6: we have three 1's, two 2's and one 1 so -> 312211
n = 7: we have one 3, one 1, two 2's and two 1's -> 13112221
...
n = i: return counts in front of the number for entry of i-1 case

The following are sequence from n=1 to n=10:

 1.     1
 2.     11
 3.     21
 4.     1211
 5.     111221 
 6.     312211
 7.     13112221
 8.     1113213211
 9.     31131211131221
 10.   13211311123113112211
 */



class Solution {
public:
    string countAndSay(int n) {
        // base case
        if(n==1)
            return "1";
        if(n==2)
            return "11";
        
        // take a string equals 11
        string str = "11";
        
        // now we need the value of nth term so we loop from 3 -> n
        for(int i=3; i<=n ; i++)
        {
            // temp will have the ans of the next iteration i.e value of the next ith data
            string temp = "";
            str = str+"&"; // add a delimeter at the end
            int cnt = 1; // counter 
            
            // now loop from 1st value to last value
            for(int j = 1; j<str.length(); j++)
            {
                // this condition should be satisfied, if not that means new number has started occurring
                if(str[j]!=str[j-1])
                {
                    temp = temp + to_string(cnt); // add the counter to temp
                    temp = temp + str[j-1]; // add the data of the counter
                    cnt = 1; // reset the counter to 1
                }
                else
                    cnt++; // just count the freq of that number
            }
            
            // after one complete traversal, make str equal to temp;
            str = temp;
        }
        
    return str;
    }
};