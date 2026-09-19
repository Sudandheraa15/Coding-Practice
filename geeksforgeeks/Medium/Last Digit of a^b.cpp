class Solution {
  public:
    int getLastDigit(string& a, string& b) {
        // code here
       if(b=="0"){
           return 1;
       }
       int n=a[a.length()-1]-'0';
       if(n==0||n==1||n==5||n==6){
           return n;
       }
       int ex=0;
       for(int i=0;i<b.length();i++){
           ex=(ex*10+(b[i]-'0'))%4;
       }
       if(ex==0){
           ex=4;
       }
       int ans=1;
       for(int i=1;i<=ex;i++){
           ans=(ans*n)%10;
       }
       return ans;
    }
};