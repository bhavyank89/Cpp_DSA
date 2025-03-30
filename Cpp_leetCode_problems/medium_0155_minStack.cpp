class MinStack {
    public:
        stack<long long> st;
        long long minValue;
    
        MinStack() {
            minValue = LLONG_MAX;         
        }
        
        void push(int val) {
            if (st.empty()) {
                minValue = val;
                st.push(val);
            } else {
                if (val >= minValue) {
                    st.push(val);
                } else {
                    st.push(2LL * val - minValue);
                    minValue = val;
                }
            }
        }
        
        void pop() {
            if (st.empty()) return;
    
            long long topValue = st.top();
            st.pop();
    
            if (topValue < minValue) {
                minValue = 2 * minValue - topValue;
            }
            
            if (st.empty()) {
                minValue = LLONG_MAX; 
            }
        }
        
        int top() {
            if (st.empty()) return -1;
            
            long long topValue = st.top();
            return (topValue < minValue) ? minValue : topValue;
        }
        
        int getMin() {
            return (st.empty()) ? -1 : minValue;
        }
    };
    