class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        double root=pow(m,1.0/n);
        int ans=round(root);
        if(pow(ans,n)==m){
            return root;
        }
        else{
            return -1;
        }
        
    }
};