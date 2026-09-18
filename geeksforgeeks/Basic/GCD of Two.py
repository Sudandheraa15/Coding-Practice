class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        while(b!=0){
            int hcf=a%b;
            a=b;
            b=hcf;
        }
        return a;
    }
};
