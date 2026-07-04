class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();

        // Skip leading spaces
        while (i < n && s[i] == ' ')
            i++;

        // Check sign
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-')
                sign = -1;
            i++;
        }

        long long result = 0;

        // Convert digits
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            result = result * 10 + digit;

            // Overflow check
            if (sign == 1 && result > INT_MAX)
                return INT_MAX;

            if (sign == -1 && -result < INT_MIN)
                return INT_MIN;

            i++;
        }

        return sign * result;
    }
};