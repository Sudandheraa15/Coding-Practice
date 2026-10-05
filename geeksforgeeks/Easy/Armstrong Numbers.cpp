class Solution {
    static boolean armstrongNumber(int n) {
        // code here
        int org=n;
        int sum=0;
        while(n>0){
            int d=n%10;
            sum+=(d*d*d);
            n/=10;
        }
        n=org;
        if(n==sum){
            return true;
        }
        return false;
    }
}