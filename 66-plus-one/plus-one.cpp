class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits; // No need to handle carry
            }
            digits[i] = 0; // Carry over
        }
        digits.insert(digits.begin(), 1); // If all were 9s
        return digits;
    }
};
