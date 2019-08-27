class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
        {
            return "";
        }
        int a=strs.size();
        int temp=strs[0].length();
        for(int i=1;i<a;i++)
        {
            if(strs[i].length()<temp)
            {
                temp=strs[i].length();
            }
        }
        string ans="";
        for(int j=0;j<temp;j++)
        {
            char p=strs[0][j];
            int flag=0;
            for(int k=1;k<a;k++)
            {
                if(strs[k][j]!=p)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                ans+=strs[0][j];
            }
            else
            {
                break;
            }
            
        }
        return ans;
    }
};
