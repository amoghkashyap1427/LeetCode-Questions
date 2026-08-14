class Solution {
public:
    int oddSumm(int n) { return n * n; }

    int evenSumm(int n) { return n * (n + 1); }

    int gcdd(int a, int b) {
        while (a != 0 && b != 0) {
            if (a >= b) {
                a = a % b;
            } else {
                b = b % a;
            }
        }
        return (a == 0) ? b : a;
    }

    int gcdOfOddEvenSums(int n) {
        int oddSum = oddSumm(n);
        int evenSum = evenSumm(n);
        return gcdd(oddSum, evenSum);
    }
};