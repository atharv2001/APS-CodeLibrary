class MinStack {
public:
    /** initialize your data structure here. */
    stack<pair<int,int>> sp;
    int cur_min=INT_MAX;

    MinStack() {

    }

    void push(int x) {
        if(x<cur_min)
            cur_min=x;
        sp.push(make_pair(x,cur_min));
    }

    void pop() {
        sp.pop();
        cur_min=sp.empty()?INT_MAX:sp.top().second;
    }

    int top() {
        return sp.top().first;
    }

    int getMin() {
        return sp.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
