class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)
        return false;
        double m = log2(n);
        if(floor(m)==ceil(m))
        return true;
        else
        return false;
    }
};