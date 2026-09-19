class Solution {
  public:
    int firstOccurence(string& txt, string& pat) {
        // code here
        for(int i=0;i<txt.length();i++){
           int j=pat.length();
           string s=txt.substr(i,j);
           
          if(s==pat){
               return i;
           }
        }
        return -1;
    }
};