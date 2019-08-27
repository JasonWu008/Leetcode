class Solution {
public:
    int romanToInt(string s) {
        map<char,int> a={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int ans=0;
        for(int i=0;i<s.length();++i)
        {
            if(i==s.length()-1||a[s[i+1]]<=a[s[i]])
            {
                ans+=a[s[i]];
            }
            else
            {
                ans-=a[s[i]];
            }
        }
        return ans;
    }
};
