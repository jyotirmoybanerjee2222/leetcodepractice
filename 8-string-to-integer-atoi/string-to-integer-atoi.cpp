class Solution {
public:
    int myAtoi(string s) {
        int sign = +1;
        long long int  ans = 0;
        int i =0;
        int value;

        while(i < s.length() && s[i] == ' ')
        
            i++;
        
        
        if(s[i] == '-')
        {
            sign = -1;
            i++;
        }
        else if(s[i] == '+')
        {
            i++;
        }
        
        while(i< s.length())
        {
            if(s[i]>='0' && s[i]<='9'){
            
                ans = ans *10 + (s[i] - '0');
            
            if(ans > INT_MAX && sign == 1)
            {
                return INT_MAX;
            }
            if(ans > INT_MAX && sign == -1)
            {
                return INT_MIN;
            }
            i++;
        }
        else{
                break;
        }
        }
        return ans * sign;

    }
    
    
};