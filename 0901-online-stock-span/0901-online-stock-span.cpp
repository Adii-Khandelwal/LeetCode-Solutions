class StockSpanner {
public:
stack<pair<int,int>>st; 
int i;
    StockSpanner() {
        i=1;
    }
    
    int next(int price) {
        int ans=0;
        if(st.size()==0)
        {
            ans=i;
        }
        else if(st.size()>0 && st.top().first>price)
        {
            ans=i-st.top().second;
        }
        else if(st.size()>0 && st.top().first<=price)
        {
            while(st.size()>0 && st.top().first<=price)
            {
                st.pop();
            }
            if(st.size()==0)
            {
                ans=i;
            }
            else{
                ans=i-st.top().second;
            }
        }



        
        st.push({price,i});
        i++;
        return ans;
        
    }
};
/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */