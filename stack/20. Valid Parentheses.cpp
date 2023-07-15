class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char>st;
        int i=0;
        while(i<n){
         if(st.empty()){
             st.push(s[i]);
         }

         else if(st.top() == '(' && s[i]==')' || 
               ( st.top() == '[' && s[i]==']') ||
               (st.top() == '{' && s[i]=='}')
         ){
             st.pop();
         }
         else{
             st.push(s[i]);
         }

         i++;
        }

        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
