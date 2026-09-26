class Solution {
    public String multiplyStrings(String s1, String s2) {

        boolean negative = false;
        if (s1.charAt(0) == '-') {
            negative = !negative;
            s1 = s1.substring(1);
        }
        if (s2.charAt(0) == '-') {
            negative = !negative;
            s2 = s2.substring(1);
        }
        boolean zero1 = true;
        for (int i = 0; i < s1.length(); i++) {
            if (s1.charAt(i) != '0') {
                zero1 = false;
                break;
            }
        }
        boolean zero2 = true;
        for (int i = 0; i < s2.length(); i++) {
            if (s2.charAt(i) != '0') {
                zero2 = false;
                break;
            }
        }
        if (zero1 || zero2) {
            return "0";
        }
        int n = s1.length();
        int m = s2.length();
        int[] result = new int[n + m];
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int a = s1.charAt(i) - '0';
                int b = s2.charAt(j) - '0';
                int product = a * b;
                int pos1 = i + j;
                int pos2 = i + j + 1;
                int sum = product + result[pos2];
                result[pos2] = sum % 10;
                result[pos1] += sum / 10;
            }
        }
        StringBuilder ans = new StringBuilder();
        int i = 0;
        while (i < result.length && result[i] == 0) {
            i++;
        }
        while (i < result.length) {
            ans.append(result[i]);
            i++;
        }
        if (negative) {
            ans.insert(0, '-');
        }
        return ans.toString();
    }
}