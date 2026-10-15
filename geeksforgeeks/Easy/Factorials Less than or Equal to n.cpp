class Solution {
    static ArrayList<Long> factorialNumbers(long n) {
        // code here
        long fact=1;
        ArrayList<Long> list=new ArrayList<>();
        for(int i=1;i<=n;i++){
            fact*=i;
            if(fact>n){
                break;
            }
            list.add(fact);
        }
        return list;
    }
}