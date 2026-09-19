class Solution {
public:
    int divisibleByDigits(string& s) {
        int rem[10] = {0};
        for (int i = 0; i < s.length(); i++) {
            int digit = s[i] - '0';
            for (int d = 1; d <= 9; d++) {
                rem[d] = (rem[d] * 10 + digit) % d;
            }
        }
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            int d = s[i] - '0';
            if (d != 0 && rem[d] == 0) {
                count++;
            }
        }
        return count;
    }
};