class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>temp(nums1.begin(),nums1.end());
        vector<int>res;
        for(auto it:nums2)
        {
            if(temp.erase(it)) 
            {
                res.push_back(it);
            }
        }
        return res;
    }
};
