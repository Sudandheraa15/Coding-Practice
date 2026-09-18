class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
       sort(arr.begin(),arr.end());
       int low=0;
       int high=arr.size()-1;
       if(arr.size()%2==1){
           int median=(low+high)/2;
       return arr[median];
       }
       else{
           int median=arr[arr.size()/2-1]+arr[arr.size()/2];
           return median/2.0;
       }
    }
};