//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int longestPalinSubseq(string A) {
        //code here
        
         string s = A;
         reverse(s.begin(),s.end());
         
         vector<int>prev(s.size()+1,0) , cur(s.size()+1,0);
         
         for(int i=1;i<=s.size();i++){
             for(int j=1;j<=s.size(); j++){
                 if(A[i-1] == s[j-1]){
                     cur[j] = 1 + prev[j-1];
                 }
                 else{
                     cur[j] = fmax(cur[j-1],prev[j]);
                 }
             }
             
             prev = cur;
         }
         return cur[s.size()];
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
