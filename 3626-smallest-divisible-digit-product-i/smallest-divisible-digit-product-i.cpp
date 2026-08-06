class Solution {
public:
    int product(int x){
        int product = 1;
        while(x > 0){
            product *= (x%10);
            x = x/10;
        }
        return product;
    }
    int smallestNumber(int n, int t) {
        while(product(n) % t != 0){
            n++;
        }
        return n;
    }
};