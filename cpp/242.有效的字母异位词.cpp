class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        int n=s.length();
        unordered_map<char,int>q;
        for(int i=0;i<n;i++)
        {
            q[s[i]]++;
            q[t[i]]--;
        }
        for(auto temp:q)
        {
            if(temp.second)return false;
        }
        return true;
    }
};
