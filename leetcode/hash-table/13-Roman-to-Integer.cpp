class Solution {
public:
    int romanToInt(string s) {
        int res=0;
        for(int i=0;i<s.length();i++){
            int cur=0;
            int next=0;
            char ch=s[i];
            if(ch=='I'){
                cur=1;
            }
            else if(ch=='V'){
                cur=5;
            }
            else if(ch=='X'){
                cur=10;
            }
            else if(ch=='L'){
                cur=50;
            }
            else if(ch=='C'){
                cur=100;
            }
            else if(ch=='D'){
                cur=500;
            }
            else if(ch=='M'){
                cur=1000;
            }
            if(i+1<s.length()){
                char c=s[i+1];
                if(c=='I'){
                next=1;
            }
            else if(c=='V'){
                next=5;
            }
            else if(c=='X'){
                next=10;
            }
            else if(c=='L'){
                next=50;
            }
            else if(c=='C'){
                next=100;
            }
            else if(c=='D'){
                next=500;
            }
            else if(c=='M'){
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