class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(int i=0;i<s.length();i++)
        {
            if((s[i]<91&&s[i]>64)||(s[i]>47&&s[i]<58))
            {
                temp+=s[i];
            }
            if(s[i]>96&&s[i]<123)
            {
                temp+=(s[i]-32);
            }
                
        }
        for(int j=0;j<temp.length()/2;j++)
        {
            if(temp[j]!=temp[temp.length()-j-1])
            {
                return false;
            }
        }
        return true;
    }
};
