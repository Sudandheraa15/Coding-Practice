class Solution {
    static int nthFibonacci(int n) {
        // code here
        int a=0;
        int b=1;
        if(n==0){
            return a;
        }
        if(n==1){
            return b;
        }
        for(int i=1;i<n;i++){
            int temp=b;
            b=a+b;
            a=temp;
        }
        return b;
    }
}