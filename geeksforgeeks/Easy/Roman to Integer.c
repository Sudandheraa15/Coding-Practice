class Solution {
  public:
    int romanToInteger(string &s) {
        // code here
        int res=0;
        for(int i=0;i<s.length();i++){
            int cur=0;
            int next=0;
            
            if(s[i]=='I'){
                cur=1;
            }
            if(s[i]=='V'){
                cur=5;
            }
            if(s[i]=='X'){
                cur=10;
            }
            if(s[i]=='L'){
                cur=50;
            }
            if(s[i]=='C'){
                cur=100;
            }
            if(s[i]=='D'){
                cur=500;
            }
            if(s[i]=='M'){
                cur=1000;
            }
            
            if(i+1<s.length()){
            
            if(s[i+1]=='I'){
                next=1;
            }
            if(s[i+1]=='V'){
                next=5;
            }
            if(s[i+1]=='X'){
                next=10;
            }if(s[i+1]=='L'){
                next=50;
            }
            if(s[i+1]=='C'){
                next=100;
            }
            if(s[i+1]=='D'){
                next=500;
            }
            if(s[i+1]=='M'){
                next=1000;
            }
            
        }
        if(cur<next){
            res-=cur;
        }
        else{
            res+=cur;
        }
    }
    return res;
    }
};