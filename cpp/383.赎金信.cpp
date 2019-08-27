class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>temp;
        for(int i=0;i<magazine.size();++i)
        {
            temp[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.size();++i)
        {
            if(temp.find(ransomNote[i])!=temp.end()) temp[ransomNote[i]]--;
            else return false;             
        }
        for(auto it:temp)
        {
            if(it.second<0) return false;
        }
        return true;
    }
};
