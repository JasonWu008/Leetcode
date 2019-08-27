class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.empty()||(k%=nums.size())==0)return;
        int start=0,cnt=0,p=nums.size(),temp=0;
        int w=nums[start];
        while(cnt++<p)
        {
            temp=(temp+k)%p;
            int t=w;
            w=nums[temp];
            nums[temp]=t;
            if(temp==start)
            {
                start++,temp++;
                w=nums[start];
            }
        }
    }
};
