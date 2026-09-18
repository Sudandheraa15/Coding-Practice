class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        // code here
        int n=-1;
        int m=-1;
        int ans=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x){
                n=i;
            }
            else if(arr[i]==y){
                m=i;
            }
            if(n!=-1 && m!=-1){
                int diff=abs(n-m);
            
            if(diff < ans) 
            {
                ans = diff;
                
            }
            
        }
        
        }
    if(ans == INT_MAX) 
    {
        return -1;
    }

    return ans;
    }
};