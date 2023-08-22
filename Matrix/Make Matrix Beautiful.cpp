//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int totalSum  = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                totalSum = totalSum + matrix[i][j];
            }
        }
        
        int rs=  0;
        int cs = 0;
        for(int i=0;i<n;i++){
            int r1 = 0;
            for(int j=0;j<n;j++){
                r1 = r1 + matrix[i][j];
            }
            
            rs = max(r1,rs);
            
           
           int c1 =0;
            for(int j=0;j<n;j++){
                 
                c1 = c1 + matrix[j][i];
            }
            
            cs = max(cs,c1);
        }
        
    
        int maxi = max(rs,cs);
        return maxi*n-totalSum;
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends
