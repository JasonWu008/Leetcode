class Solution {
public:
    string countAndSay(int n) {
        if(n<1)
        {
            return "";
        }
        if(n==1)
        {
            return "1";
        }
        if(n==2)
        {
            return "11";
        }
        string ans="11";
        for(int i=2;i<n;i++)
        {
            int count=1;
            string temp="";
            for(int j=1;j<ans.length();j++)
            {
                if(ans[j]!=ans[j-1])
                {
                    temp+=char(count+'0');
                    temp+=ans[j-1];
                    count=1;
                }
                else    
                {
                    count++;
                }
            }
            temp+=char(count+'0');
            temp+=ans[ans.length()-1];
            ans=temp;
        }
        return ans;
    }
};
