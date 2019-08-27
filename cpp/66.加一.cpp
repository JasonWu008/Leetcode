class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        stack<int>temp;
        vector<int>res;
        int i=digits.size();
        int p;
        int flag=1;
        for(int k=i-1;k>=0;k--)
        {
            if(flag==1)
            {
                p=digits[k]+1;
            }
            else
            {
                p=digits[k];
            }
            
            if(p<10)
            {
                flag=0;
            }
            temp.push(p%10);
        }
        if(flag==1)
        {
            temp.push(1);
        }
        while(!temp.empty())
        {
            res.push_back(temp.top());
            temp.pop();         
        }
        return res;
    }
};
