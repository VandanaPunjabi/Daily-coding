//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        // code here
        
        int n= s.size();
        int start = 0;
        int end = 0;
        int maxi = 1;
        
        for(int i=0;i<n;i++){
            int l=i,r=i;
            while(l>=0 && r<n){
                if(s[l]!=s[r]){
                    break;
                }
                l--;
            r++;
            }
             int len = r-l-1;
            if(len>maxi){
            maxi = len;
            start = l + 1;
            end = r - 1;
        }
    }
    
     for(int i=0;i<n;i++){
         int l = i;
         int r = i+1;
         while(l>=0 && r<n){
             
             if(s[l]!=s[r]){
                 break;
             }
             l--;
             r++;
         }
         
         int len = r-l-1;
         if(len>maxi){
             maxi = len;
             start = l+1;
             end = r-1;
         }
     }

        return s.substr(start,maxi);
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
