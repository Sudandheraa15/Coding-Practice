class Solution {
    public ArrayList<Integer> getDivisors(int n) {
        // code here
        ArrayList<Integer> l=new ArrayList<>();
        HashSet<Integer> set=new HashSet<>();
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                set.add(i);
                if(n!=1)
                set.add(n/i);
            }
        }
        for(int i:set){
            l.add(i);
        }
        Collections.sort(l);
         return l;
    }
}