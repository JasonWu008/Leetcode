class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=nums[0];
        int temp=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==res)
            {
                temp++;
            }
            else
            {
                if(temp>0)
                {
                    temp--;
                }
                else
                {
                    res=nums[i];
                }
            }
        }
        return res;
    }
};
