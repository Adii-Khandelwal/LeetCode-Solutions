class Solution {
public:
    string simplifyPath(string path) {
      
        stack<string> s;
        string res;
        vector<string> p;

        size_t start = 0;
        size_t end = path.find('/');

        while (end != string::npos) 
        {
            string segment = path.substr(start, end - start);

            if (!segment.empty()) 
            {
                
                if (segment == "..") 
                {
                    if (!s.empty()) 
                    {
                        s.pop();
                    }
                } 
                else if (segment != ".") 
                {
                    s.push(segment);
                }
            }

            start = end + 1;
            end = path.find('/', start);
        }

        string segment = path.substr(start);
        if (!segment.empty()) 
        {
            if (segment == "..") 
            {
                if (!s.empty()) 
                {
                    s.pop();
                }
            } 
            else if (segment != ".") 
            {
                s.push(segment);
            }
        }

        if (s.empty()) 
        {
            return "/";
        }

        while (!s.empty()) 
        {
            res = '/' + s.top() + res;
            s.pop();
        }

        return res;


   
    }
};