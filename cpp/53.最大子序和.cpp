class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];        
        }
        int max=nums[0];
        int m=0;
        int flag=0;
        for(int i=0;i<nums.size();i++)
        {
            if(flag==1)
            {
                m=0;
                flag=0;
            }
            m+=nums[i];
            if(m<0)
            {
                flag=1;
            }
            if(max<m)
            {
                max=m;
            }
        }
        return max;
    }
};
