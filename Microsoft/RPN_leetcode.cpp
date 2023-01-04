class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto it:tokens){
            if(it=="+" || it=="-" || it=="*" || it="/"){
                int a = st.top();
                st.pop();
                int b=st.top();
                st.pop();
                switch(it){
                    case "+":
                    st.push(a+b);
                    case "-":
                    st.push(a-b);
                    case "*":
                    st.push(a*b);
                    case "/":
                    st.push(a/b);
                    default:

                }
                
            }
        }
    }
};
