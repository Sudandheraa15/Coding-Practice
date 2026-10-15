class Solution {
    public boolean isStrong(int n) {
        // code here
        int sum=0;
        int org=n;
        while(n>0){
            int d=n%10;
            int fact=1;
            for(int i=1;i<=d;i++){
                fact*=i;
            }
            sum+=fact;
            n/=10;
        }
        if(org==sum){
            return true;
        }
        else{
            return false;
        }
    }
}