class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) { 
        sort(nums.begin(),nums.end());
        int res=nums[0]+nums[1]+nums.back();
        for(int i=0;i<nums.size()-2;++i)
        {
            int l=i+1,r=nums.size()-1;
            while(l<r)
            {
                int temp=nums[i]+nums[l]+nums[r];
                if(abs(temp-target)<abs(res-target)) res=temp;
                
                if(temp<target) l++;
                else r--;
            }
        }
        return res;
    }
};
