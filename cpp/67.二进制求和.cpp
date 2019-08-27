class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        string res="";
        while(i>=0||j>=0)
        {
            int p= i>=0 ? a[i--]-'0':0;
            int q= j>=0 ? b[j--]-'0':0;
            int sum=p+q+carry;
            carry=sum/2;
            res=to_string(sum%2)+res;
        }
        return carry==1 ? "1"+res:res;
    }
};
