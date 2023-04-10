class Solution {
public:
    int mySqrt(int x) {
        
        if(x==0 || x==1)
            return x;
        
       long long r=x;
        
    int last=x;
        int first=0;
        
        while(last>=first)
        {
            // int mid=(l+h)/2;
            
            int mid = first + (last - first) / 2;
            // mid * mid == x gives runtime error
            if (mid  == x / mid)
                return mid;
            else if (mid > x / mid) {
                last = mid - 1;
            }
            else {
                first = mid + 1;
            }
        }
        return last;
        }
        
   
};