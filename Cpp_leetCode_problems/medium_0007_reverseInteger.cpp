class Solution {
public:
    int reverse(int x) {
        int origx = x, revx = 0;
        while(origx!=0){
            if(INT_MAX/10<revx || INT_MIN/10>revx){
                return 0;
            }
            else{
            revx = revx * 10 + origx % 10;
            origx = origx / 10;
            }
        }
        return revx;
    }
};