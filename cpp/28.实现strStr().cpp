class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()==0)
        {
            return 0;
        }
        for(int i=0;i<haystack.length();i++)
        {
            if(haystack[i]==needle[0])
            {
                int flag=0;
                for(int j=1;j<needle.length();j++)
                {
                    if(haystack[i+j]!=needle[j])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};
