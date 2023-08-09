void insertAtb(stack<int> &s, int ele){
    
    if(s.empty()){
        s.push(ele);
        return;
    }

    int num = s.top();
    s.pop();

    insertAtb(s,ele);

    s.push(num);
}

void reverseStack(stack<int> &stack) {
    // Write your code here

    if(stack.empty()){
        return;
    }
    
    int num = stack.top();
    stack.pop();
    
    reverseStack(stack);

    insertAtb(stack,num);
}
