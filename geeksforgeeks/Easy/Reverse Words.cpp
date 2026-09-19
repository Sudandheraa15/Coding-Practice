class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        vector<string> words;
        string word="";
        for(int i=0;i<s.length();i++){
            if(s[i]!='.'){
                word+=s[i];
            }
            else{
                if(word!=""){
                 words.push_back(word);
                 word="";
                }
            }
        }
        
        if(word!=""){
            words.push_back(word);
        }
        reverse(words.begin(),words.end());
        string res="";
        for(int i=0;i<words.size();i++){
            if(i>0){
                res+='.';
            }
            res+=words[i];
        }
        return res;
    }
};