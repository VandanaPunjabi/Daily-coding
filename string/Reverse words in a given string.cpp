//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
      
         S.push_back('.');
        stack<string>st;
        string ans = "" ;
        
        for(int i=0;i<S.size();i++){
            
            if(S[i]!='.'){               
                ans.push_back(S[i]);    //i like this program very much
            }                           //very
            else{
                st.push(ans);            //st = i like this program very much 
                ans="";
            }
        }
        
        string res = "";
        int size = st.size();
        for(int i=0;i<size;i++){
            
            res.append(st.top());      //much.very.
            res.push_back('.');
            st.pop();
        }
        
        res.pop_back();
        return res;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
