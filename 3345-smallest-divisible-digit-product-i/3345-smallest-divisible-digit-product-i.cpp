
class Solution {
public:
    int smallestNumber(int n, int t) {
    while (true) {
            if (digitProduct(n) % t == 0)
                return n;
            n++;
        }
    }

int digitProduct(int x) {
        int prod = 1;

        while (x > 0) {
            prod *= (x % 10);
            x /= 10;
        }

        return prod;
    }

};