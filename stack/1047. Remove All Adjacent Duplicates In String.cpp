class Solution {
public:
    string removeDuplicates(string s) {
        
      stack<int>st;
      int i=0;
      int n = s.size();

      while(i<n){

          if(st.empty() || st.top()!=s[i])

              st.push(s[i]);
           else
           st.pop();

        i++;
          
      }

        string var = "";
        while(!st.empty()){

            char ans = st.top();
            st.pop();

            var = var + ans;
        }

        reverse(var.begin(),var.end());
        return var;
    }
};
