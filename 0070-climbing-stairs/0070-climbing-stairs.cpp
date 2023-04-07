class Solution {
public:
    int climbStairs(int n) {
        
      int pr2=1;
        int pr=1;
        
        for(int i=2;i<=n;i++)
        {
            int curr=pr+pr2;
            pr2=pr;
            pr=curr;
        }
        return pr;
    }
};