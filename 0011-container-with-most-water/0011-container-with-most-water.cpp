class Solution {
public:
    int maxArea(vector<int>& height) {
        
        
        
        
        //BRUTE FORCE GAVE "TLE"

//         int max=0;
        
//         int i=0;
//         int j=0;
//         int k=0;
//         int area=0;
        
//         for(i=0;i<height.size()-1;i++)
//         for(j=i+1;j<height.size();j++)
//         {
//             k=min(height[i],height[j]);
            
//             area=k*(j-i);
            
//             if(area>max)
//                 max=area;
            
//         }
    
//         return max;

    
       //OPTIMIZED APPROACH
        int i=0;
        int j=height.size()-1;
        int k=0;
        int area=0;
        
       while(i<j)
        {
            k=min(height[i],height[j]);
            area=max(area,k*(j-i));
           
            while(height[i]<=k && i<j)i++;
            while(height[j]<=k && i<j)j--;
               
        }
    
        return area;
    
    
    
    
    
    
    }
};