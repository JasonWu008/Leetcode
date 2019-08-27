class Solution {
public:
    string simplifyPath(string path) {
        string res,temp;
        stringstream ss(path);
        vector<string>v;
        
        while(getline(ss,temp,'/'))
        {
            if(temp==""||temp==".") continue;
            else if(temp!="..") v.push_back(temp);
            else if(!v.empty()) v.pop_back();
        }
        for(string s:v) res+="/"+s;
        return res.empty() ? "/":res;
    }
};
