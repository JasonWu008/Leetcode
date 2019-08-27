class Solution {
public:
    int titleToNumber(string s) {
        int res=0;
        int temp=1;
        for(int i=s.length()-1;i>=0;i--)
        {
            res+=(s[i]-'A'+1)*temp;
            temp*=26;
        }
        return res;
    }
};
