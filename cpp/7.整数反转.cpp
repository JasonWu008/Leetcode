class Solution {
public:
    int reverse(int x) {
        int temp=0;
        int ans=0;

        while(x!=0)
        {
            temp=x%10;
            x/=10;
            if(ans>INT_MAX/10||(ans==INT_MAX&&temp>7)) return 0;
            if(ans<INT_MIN/10||(ans==INT_MIN&&temp<-8)) return 0;
            ans=ans*10+temp;
        }
        return ans;
    }
};
