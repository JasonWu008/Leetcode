class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k<1||nums.size()<2)return false;
        unordered_map<int,int>res;
        for(int i=0;i<nums.size();i++)
        {
            if(res.count(nums[i]))
            {
                if(i-res[nums[i]]<=k)return true;
                else res[nums[i]]=i;
            }
            else
            {
                res.insert(pair<int,int>(nums[i],i));
            }
        }
        return false;
    }
};
