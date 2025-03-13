class Solution {
public:
    int hammingWeight(int n) {
        int result;
        while(n>=1){
            if(n%2 == 1) result++;
            n /= 2;
        }
        return result;
    }
};
