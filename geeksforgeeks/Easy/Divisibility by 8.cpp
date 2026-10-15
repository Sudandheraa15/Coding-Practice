class Solution {
    public boolean isDivBy8(String s) {
        // code here
        int rem=0;
        for(int i=0;i<s.length();i++){
            int d=s.charAt(i)-'0';
            rem=(rem*10+d)%8;
            
        }
        return rem==0;
    }
}
