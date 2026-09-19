void utility(string s) {
    // length of string is given by s.length()
    // character at any index i is given by s[i]

    // Write your code here
    string res="";
    for(int i=0;i<s.length();i++){
        if(i%2==0){
            res+=s[i];
        }
    }
    cout<<res;
}