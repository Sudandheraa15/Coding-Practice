class Solution {
    static boolean isPerfect(int n) {
        // code here
        int sum=0;
        for(int i=1;i*i<n;i++){
            if(n%i==0){
                sum+=i;
                if(i!=n/i){
                    sum+=n/i;
                }
            }
        }
        sum-=n;
        if(sum==n){
            return true;
        }
        return false;
    }
}