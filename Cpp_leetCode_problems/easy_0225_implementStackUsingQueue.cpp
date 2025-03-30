#include <queue>

class MyStack {
public:
    queue<int> q;

    MyStack() { 
    }
    
    void push(int x) {
        int size = q.size();
        q.push(x);
        for (int i = 0; i < size; i++) {
            int ele = q.front(); // Use front() instead of top()
            q.push(ele);
            q.pop();
        }
    }

    int pop() {
        if (q.empty()) return -1; // Handle empty stack case
        int ele = q.front(); // Use front() instead of top()
        q.pop();
        return ele;
    }
    
    int top() {
        if (q.empty()) return -1; // Handle empty stack case
        return q.front(); // Use front() instead of top()
    }
    
    bool empty() {
        return q.empty(); // Corrected condition
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
