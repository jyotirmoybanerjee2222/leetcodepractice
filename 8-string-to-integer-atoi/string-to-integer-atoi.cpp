class Solution {
public:
    int myAtoi(string s) {
        int sign = 1; // Default to positive
        long long ans = 0; // Use long long for intermediate calculations
        int i = 0;

        // Skip leading whitespace
        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        // Handle sign
        if (i < s.length() && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Process digits
        while (i < s.length() && isdigit(s[i])) {
            ans = ans * 10 + (s[i] - '0');

            // Check for overflow or underflow
            if (sign == 1 && ans > INT_MAX) {
                return INT_MAX;
            }
            if (sign == -1 && -ans < INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        return ans * sign;
    }
};
