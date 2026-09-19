class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        set<char>set;
        string res="";
        for(int i=0;i<s.length();i++){
            if(set.count(s[i])==0){
                res+=s[i];
                set.insert(s[i]);
            }
        }
        return res;
    }
};