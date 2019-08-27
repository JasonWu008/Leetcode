class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char,string>q;
        istringstream in(str);
        int i=0;
        for(string word;in>>word;i++)
        {
            if(q.find(pattern[i])!=q.end())
            {
                if(q[pattern[i]]!=word)return false;
            }
            else
            {
                for(unordered_map<char,string>::iterator it=q.begin();it!=q.end();++it)
                {
                    if(it->second==word)return false;
                }
                q[pattern[i]]=word;
            }
        }
        return i==pattern.size();
    }
};
