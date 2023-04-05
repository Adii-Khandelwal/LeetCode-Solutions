class Solution {
public:
    bool isValid(string s) {
        
        
        //THIS METHOD IS NOT CORRECT AS THIS ONE SEES IF ALL OPEN AND CLOSE ARE THERE OR NOT . IT DOESNT SEE THE CORRECT ORDER OF USE OF THEM.
        
        
        
//         map<int, int> mp;
 
   
//     mp.insert({ 1,0});
//     mp.insert({ 2, 0 });
//     mp.insert({ 3, 0 });
 
//         for(int i=0;i<s.size();i++)
//         {
//             switch(s[i])
//             {
//                 case '{':
//                     {mp[1]++;
//                     break;
//                     }
//                 case '}':
//                     {
//                         mp[1]--;
//                         break;
//                     }
//                 case '(':
//                     {mp[2]++;
//                     break;
//                     }
//                 case ')':
//                     {
//                         mp[2]--;
//                         break;
//                     }

//                     case '[':
//                     {mp[3]++;
//                     break;
//                     }
//                 case ']':
//                     {
//                         mp[3]--;
//                         break;
//                     }

//             }
            
//         }
        
//         if(mp[1]==0 && mp[2]==0 && mp[3]==0)
//             return true;
//         else
//             return false;
        
        
        stack<int> st;
        if(s.length()==1)
            return false;
        
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='(')
                st.push('(');
            else if(s[i]=='{')
                st.push('{');
            else if(s[i]=='[')
                st.push('[');
            else if(s[i]==')')
            {
                if(st.size()==0)
                    return false;
                if(st.top()=='(')
                    st.pop();
                else return false;
            }
            else if(s[i]=='}')
            {
                if(st.size()==0)
                    return false;
                if(st.top()=='{')
                    st.pop();
                else return false;
            }
            else 
            {
                if(st.size()==0)
                    return false;
                if(st.top()=='[')
                    st.pop();
                else return false;
            }
            
           
                
        }
        if(st.size()==0)
         return true;
        else return false;
        
    }
};