class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int n=heights.size();
        vector<int> leftB(n),rightB(n);
        // left smaller element;

        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i] ){
                    st.pop();
            }
            if(st.empty()){
                leftB[i]=0;
            }
            else{
                leftB[i]=st.top()+1;
            }
            st.push(i);
        }
        //make sure stack is empty()
        while(!st.empty()){
            st.pop();
        }

        //right smaller element
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                    st.pop();
            }
            if(st.empty()){
                rightB[i]=n-1;
            }
            else{
                rightB[i]=st.top()-1;
            }
            st.push(i);
        }

        // Formula application width * h =area ;
        // width = rightB[i]-leftB[i];

        int maxArea=0;
        for(int i=0;i<n;i++){
            int currArea=(rightB[i]-leftB[i]+1)*heights[i];
            maxArea = max(maxArea , currArea);
        }

        return maxArea;
    }
};