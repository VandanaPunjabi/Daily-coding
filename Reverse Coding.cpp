//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int sumOfNaturals(int n) {
        // code here
        long long  sum=0;
        long long mod=1000000007;
        
        
        // sum = ((n*(n+1))/2) %1000000007;
        if(n%2==0){
            sum=(n/2)%mod * (n+1)%mod;
        }
        
        else{
            sum = ((n+1)/2)%mod * n%mod;
;        }
       return sum%1000000007;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.sumOfNaturals(n) << endl;
    }
    return 0;
}
// } Driver Code Ends
