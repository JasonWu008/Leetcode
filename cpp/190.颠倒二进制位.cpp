class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string res;
        for(int i=0;i<32;i++)
        {
            res=res+(char)(n%2);
            n/=2;
        }
        int temp=1;
        int m=0;
        for(int i=31;i>=0;i--)
        {
            m+=res[i]*temp;
            temp*=2;
        }
        return uint32_t(m);
    }
};
