class MinStack {
public:
    void push(int x) {
        s.push_back(x);
        if (x < s[mini])
            mini = s.size() - 1;
    }

    void pop() {
        s.pop_back();
        if (s.size() == mini) {
            mini = 0;
            for (int i = 1; i < s.size(); ++i)
                if (s[i] < s[mini])
                    mini = i;
        }
    }

    int top() {
        return s.back();
    }

    int getMin() {
        return s[mini];
    }
private:
    int mini = 0;
    vector<int> s;
};
