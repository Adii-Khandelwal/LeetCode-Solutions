class Solution {
public:
    string addStrings(string nums1, string nums2) {
        
    int i=nums1.size()-1;
    int j=nums2.size()-1;
        string res;
        int sum=0;
        while(i>=0 && j>=0)
        {
            sum+=(nums1[i--]-'0')+(nums2[j--]-'0');
            res.push_back(char(sum%10 + '0'));
            sum=sum/10;
                
        }
        
        while(i>=0)
        {
            sum+=nums1[i--]-'0';
            res.push_back(char(sum%10+'0'));
            sum/=10;
        }
        while(j>=0)
        {
            sum+=nums2[j--]-'0';
            res.push_back(char(sum%10+'0'));
            sum/=10;
        }
         if(sum > 0)
            res.push_back(char(sum%10 + '0'));
        reverse(res.begin(), res.end());
        
        return res;
        
        
    }
};