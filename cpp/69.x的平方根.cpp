class Solution {
public:
    int mySqrt(int x) {
        if(x<=1)
        {
            return x;
        }
        int left=0,right=x;
        int mid;
        while(left<right)
        {
            mid=(left+right)/2;
            if(x/mid>=mid)
            {
                left=mid+1;
            }
            else
            {
                right=mid;
            }
        }
        return (right-1);
    }
};
