class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;

        long long  reverse = 0;
        long long  tmp = x;
        while(tmp){
            int digit = tmp %10;
            reverse = reverse*10 + digit;
            tmp /=10;
            // reverse = reverse * 10;
        }
        return (reverse == x)? true : false;
    }
};
