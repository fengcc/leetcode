class Queue {
private:
    stack<int> stack_push;
    stack<int> stack_pop;
public:
    // Push element x to the back of queue.
    void push(int x) {
        stack_push.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        peek();
        stack_pop.pop();
    }

    // Get the front element.
    int peek(void) {
        if (stack_pop.empty()) {
            while (!stack_push.empty()) {
                stack_pop.push(stack_push.top());
                stack_push.pop();
            }
        }
        return stack_pop.top();
    }

    // Return whether the queue is empty.
    bool empty(void) {
        if (stack_pop.empty() && stack_push.empty())
            return true;
        return false;
    }
};