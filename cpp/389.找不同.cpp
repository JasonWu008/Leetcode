class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>res;
        for(auto c:t) res[c]++;
        for(auto c:s) res[c]--;
        for(auto i:res)
        {
            if(i.second==1)return i.first;
        }
    }
};
