class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0;
        int digit = 0;
        int original = x;
        while(x > 0){
            digit = x % 10;
            rev = rev*10 + digit;
            x = x/10;
        }
        return rev == original;
        
    }
};