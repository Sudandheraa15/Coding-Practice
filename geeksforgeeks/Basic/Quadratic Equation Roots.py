class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        int d=b*b -4*a*c;
        if(d<0){
            return {-1};
        }
        if(d>=0){
             int r1=floor((-b+sqrt(d))/(2*a));
        int r2=floor((-b-sqrt(d))/(2*a));
        if(r1>r2){
            return {r1,r2};
        }
        else{
             return {r2,r1};
        }
        }
       
    }
};