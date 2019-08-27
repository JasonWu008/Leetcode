class Solution {
public:
    int lengthOfLastWord(string s) {
        int temp=0;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                if(temp!=0)
                {
                    ans=temp;
                }
                temp=0;
                
            }
            else
            {
                temp++;
            }
        }
        if(temp!=0)
        {
            return temp;
        }
        return ans;
    }
};
