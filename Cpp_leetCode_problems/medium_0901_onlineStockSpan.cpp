class StockSpanner {
    public:
        stack<pair<int,int>> st; 
        int index;
        StockSpanner() {
            index = -1;
        };
        
        int next(int price) {
            index++;
            int pseIndex = -1;
            while(!st.empty() && st.top().first<=price) st.pop();
            if(!st.empty()) pseIndex = st.top().second;
            st.push({price,index});
            return index - pseIndex;
        }
    };
    
    /**
     * Your StockSpanner object will be instantiated and called as such:
     * StockSpanner* obj = new StockSpanner();
     * int param_1 = obj->next(price);
     */