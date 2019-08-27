class NumArray {
public:
    vector<int>temp;
    NumArray(vector<int> nums) {
        temp=nums;
    }
    
    int sumRange(int i, int j) {
        int sum=0;
        for(int k=i;k<=j;++k)
        {
            sum+=temp[k];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
