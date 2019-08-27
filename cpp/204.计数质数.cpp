class Solution {
public:
    int countPrimes(int n) {
        vector<bool>res(n-1,true);
        res[0]=false;
        int p=sqrt(n);
        for(int i=2;i<=p;i++)
        {
            if(res[i-1])
            {
                for(int j=i*2;j<=n;j+=i)
                {
                    res[j-1]=false;
                }
            }
        }
        int cnt=0;
        for(int i=0;i<n-1;i++)
        {
            if(res[i])
            {
                cnt++;
            }
        }
        return cnt;
    }
};
