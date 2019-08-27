class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>temp;
        vector<int>res;
        for(auto i:nums1)
        {
            temp[i]++;
        }
        for(auto i:nums2)
        {
            if(temp.find(i)!=temp.end()&&temp[i]!=0)
            {
                res.push_back(i);
                temp[i]--;
            }
        }
        return res;
    }
};
