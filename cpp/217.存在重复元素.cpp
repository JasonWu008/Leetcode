class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>res;
        for(int i=0;i<nums.size();i++)
        {
            if(res.find(nums[i])!=res.end()) return true;
            else 
            {
                pair<int,int>temp(nums[i],1);
                res.insert(temp);
            }
        }
        return false;
    }
};
