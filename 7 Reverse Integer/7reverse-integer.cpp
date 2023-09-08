class Solution {
public:
    int reverse(int x) {
        bool sign =false;
        if(x<0){
            sign = true;
            x=x*-1;
        }
        int res=0;
        while(x!=0){
            int last = x%10;
            res = res*10 + last;
            x/=10;
        }
        if(sign) return res*-1;
        return res;
    }
};