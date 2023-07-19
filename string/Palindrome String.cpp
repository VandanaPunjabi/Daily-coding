//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    stack<char>st;
	    string ans = "";
	    string ans1 = "";
	    for(int i=0;i<S.size();i++){
	        
	        st.push(S[i]);
	        ans1 = ans1 + S[i];
	    }
	    
	    for(int i=0;i<S.size();i++){
	        
	        if(S[i] == st.top());
	        ans  = ans + st.top();
	        st.pop();
	    }
	    
	    if(ans==ans1){
	        return 1;
	    }
	    return 0;
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends
