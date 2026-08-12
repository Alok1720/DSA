class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddSum = (n*(2*1+(n-1)*2))/2;
        int evenSum = (n*(2*2+(n-1)*2))/2;
        return gcd(oddSum,evenSum);

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna