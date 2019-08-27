class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<n;i++)
        {
            nums1[m+i]=nums2[i];
        }
        for(int j=m;j<m+n;j++)
        {
            for(int k=j;k>0;k--)
            {
                if(nums1[k]<nums1[k-1])
                {
                    int temp=nums1[k];
                    nums1[k]=nums1[k-1];
                    nums1[k-1]=temp;
                }
            }
        }
    }
};
