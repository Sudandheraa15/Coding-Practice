class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        // reverse(arr.begin(),arr.end());
        vector<int> result;
        for(int i=arr.size()-1;i>=0;i--){
            result.push_back(arr[i]);
        }
        arr=result;
    }
};