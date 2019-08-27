class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int temp=nums.size();
        int res1=0,res2=0;
        for(int i=0;i<=temp;i++)
        {
            res1+=i;
            if(i!=temp)res2+=nums[i];
        }
        return res1-res2;
    }
};
