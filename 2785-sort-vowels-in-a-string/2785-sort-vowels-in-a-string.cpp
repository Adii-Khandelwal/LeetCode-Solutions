class Solution {
public:
    string sortVowels(string s) {
        int n=s.size();
        string ans(n,'.');
        // evaluates to 1 (true) if c is a lowercase vowel
   
        string temp1="";
        string temp2="";
        for(int i=0;i<n;i++)
        {
            char x=s[i];
            if (!(x == 'a' || x == 'e' || x == 'i' || x == 'o' ||x == 'u' || x == 'A' ||x == 'E' || x == 'I' ||x == 'O' || x == 'U'))
            {
                ans[i]=x;
                
            
            }
            else
            {
                if(isupper(x))
                temp1+=x;
                else
                    temp2+=x;
            }
        
    }
        sort(temp1.begin(),temp1.end());
        sort(temp2.begin(),temp2.end());
        int n1=temp1.size();
        int n2=temp2.size();
        int k=0;
        if(n1>0)
       for(int i=0;i<n;i++)
       {
           if(ans[i]=='.')
           {
               ans[i]=temp1[k++];
               if(k==n1)break;
           }
       }
         k=0;
        if(n2>0)
        for(int i=0;i<n;i++)
       {
           if(ans[i]=='.')
           {
               ans[i]=temp2[k++];
               if(k==n2)break;
           }
       }
        return ans;
        
    }  
        
        
};