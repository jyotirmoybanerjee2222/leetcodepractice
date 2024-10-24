class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length() == 0) {
            return 0;
        }
        if(haystack.length() < needle.length()) {
            return -1;
        }
        for(int i = 0;i<haystack.length();i++ )
        {
             if(haystack[i] == needle[0])
             {
                int l =i,r=0;
                while(l<haystack.length() && r < needle.length() && haystack[l] == needle[r])
                {
                       l++;
                        r++;
                        if(r == needle.length())
                        {
                            return i;
                        }                  
                }
             }
        }
     return -1;    
    }
    
};