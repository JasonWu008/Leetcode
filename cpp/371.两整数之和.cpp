class Solution {
public:
    int getSum(int a, int b) {
        int res;
        while(b!=0)
        {
    	    res=a^b;
    	    b=(a&b)<<1;
    	    a=res;
        }
        return a;
    }
};
