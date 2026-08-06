class Solution {
private:
    int getDigitProduct(int num) {
        if (num == 0)
            return 0;

        int prod = 1;
        while (num > 0) {
            prod *= (num % 10);
            num /= 10;
        }
        return prod;
    }

public:
    int smallestNumber(int n, int t) {
        for (int i = n;; ++i) {
            if (getDigitProduct(i) % t == 0) {
                return i;
            }
        }
    }
};