class Solution {
public:
    string convertToTitle(int columnNumber) {
       string output;
        // Run a while loop while columnNumber is positive...
        while(columnNumber > 0){
            // Subtract 1 from columnNumber...
            columnNumber--;
            // Get current character by doing modulo of columnNumber by 26...
            int m = columnNumber % 26;
            // Divide columnNumber by 26...
            columnNumber /= 26;
            output += 'A' + m;
        }
        // Reverse the output string...
        // Bcause we have found characters from right to left...
        reverse(output.begin(),output.end());
        // Return the reversed string.
        return output;
        
    }
};