class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==0) return true;
        int i=1;
        while(num/i>i)  ++i;
        return i*i==num;
    }
};
