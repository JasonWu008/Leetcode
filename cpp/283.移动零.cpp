class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                for(int j=i;j>left+1;j--)
                {
                    swap(nums[j],nums[j-1]);
                }
                left++;
            }
        }
    }
};
