class Solution {
  public:
    string concatenatedString(string &s1, string &s2) {
        //  code here
        string res="";
        for(int i=0;i<s1.length();i++){
            bool found=false;
            for(int j=0;j<s2.length();j++){
                if(s1[i]==s2[j]){
                    found=true;
                    break;
                }
            }
            if(!found){
                res+=s1[i];
            }
        }
        for(int i=0;i<s2.length();i++){
            bool found=false;
            for(int j=0;j<s1.length();j++){
                if(s2[i]==s1[j]){
                    found=true;
                    break;
                }
            }
            if(!found){
                res+=s2[i];
            }
        }
        if(res.empty()){
            return "-1";
        }
        return res;
    }
};