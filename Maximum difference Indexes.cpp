//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int maxDiffIndex(int A[], int N)
    {
        int mxm = 0;
        unordered_map<int,int>mp;
        unordered_map<int,int>m;
        
        for(int i=0;i<N;i++){
            
            if(mp.find(A[i])==mp.end()){
            
            mp[A[i]] = i;
            }
            m[A[i]] = i;
        }
        
        for(int i=0; i<N; i++){
            
            mxm = max(mxm,m[A[i]]-mp[A[i]]);
        }
         
        return mxm;
    }
};

//{ Driver Code Starts.

int main()
 {
     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int a[n];
         for(int i=0;i<n;i++)
            cin>>a[i];
         Solution ob;
         cout<<ob.maxDiffIndex(a, n)<<"\n";
     }
	return 0;
}
// } Driver Code Ends
