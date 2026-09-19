class Solution {
  public:
    string longest(vector<string>& arr) {
        // code here
        string res=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i].length()>res.length()){
                res=arr[i];
            }
        }
        return res;
    }
};
