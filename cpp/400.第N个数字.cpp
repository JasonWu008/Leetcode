class Solution {
public:
    int findNthDigit(int n) {
        int len=1,num=9;
        while(n/len>num)
        {
            n=n-num*len;
            num*=10;
            len++;
        }
        int index=n%len;
        int temp=n/len;
        int res=pow(10,len-1)+temp;
        if(index==0) 
        {
            index=len;
            res--;
        }
        for(int i=0;i<len-index;i++)
        {
            res/=10;
        }
        return res%10;
    }
};
