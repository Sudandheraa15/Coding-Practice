class Solution {
  public:
    string toLower(string& s) {
        // code here
        string res=s;
        for(int i=0;i<res.length();i++){
             res[i]=tolower(res[i]);
        }
        return res;
    }
};