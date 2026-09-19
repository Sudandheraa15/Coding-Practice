class Solution {
  public:
    string reverseString(string& s) {
        // code here
        string res;
       for(int i=s.length();i>=0;i--){
           res+=s[i];
       }
       return res;
    }
};
