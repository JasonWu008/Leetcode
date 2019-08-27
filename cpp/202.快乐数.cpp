class Solution {
public:
    bool isHappy(int n) {
        set<int>res;
        while(n!=1)
        {
            int temp=0;
            while(n!=0)
            {
                temp+=(n%10)*(n%10);
                n/=10;
            }
            n=temp;
            if(res.count(temp)) break;
            else res.insert(temp);
        }
        return n==1;
    }
};
