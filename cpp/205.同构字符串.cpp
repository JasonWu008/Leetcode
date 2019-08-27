class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int p=s.length();
        unordered_map<char,char>m,n;
        for(int i=0;i<p;i++)
        {
            char temp1=s[i];
            char temp2=t[i];
            if(m.find(temp1)!=m.end()&&m[temp1]!=temp2) return false;
            if(n.find(temp2)!=n.end()&&n[temp2]!=temp1) return false;
            m[temp1]=temp2;
            n[temp2]=temp1;
        }
        return true;
    }
};
