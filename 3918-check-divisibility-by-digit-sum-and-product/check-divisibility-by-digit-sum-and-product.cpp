class Solution {
public:
    int theSum(int n) {
        int sum = 0;
        int product = 1;

        while (n != 0) {
            int something = n % 10;

            sum += something;
            product *= something;

            n = n / 10;
        }

        return sum + product;
    }

    bool checkDivisibility(int n) {
        int divisor = theSum(n);

        return n % divisor == 0;
    }
};