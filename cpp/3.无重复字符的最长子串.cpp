class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        for(int i=0,j=0;j<s.length();j++)
        {
            int temp;
            for(int k=i;k<j;k++)
            {
                if(s[k]==s[j])
                {
                    i=k+1;
                }
            }
            temp=j-i+1;
            if(ans<temp)
            {
                ans=temp;
            }
        }
        return ans;
    }
};
