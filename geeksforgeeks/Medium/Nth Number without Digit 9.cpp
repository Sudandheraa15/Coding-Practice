class Solution {
public:
    string findNth(string n) {
        string ans = "";
        while (n != "0") {
            string quotient = "";
            int remainder = 0;
            for (int i = 0; i < n.length(); i++) {
                int digit = n[i] - '0';
                int value = remainder * 10 + digit;
                int q = value / 9;
                remainder = value % 9;
                if (!quotient.empty() || q != 0) {
                    quotient += char('0' + q);
                }
            }
            ans += char('0' + remainder);
            n = quotient;
           if (n == "") {
                n = "0";
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};