class MinStack {
public:

    stack<int> s;
    stack<int> ms;
    void push(int x) {
        s.push(x);
        if(ms.empty() || s.top() <= ms.top())
            ms.push(x);
    }

    void pop() {
        if(s.top() == ms.top())
            ms.pop();
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return ms.top();
    }
};