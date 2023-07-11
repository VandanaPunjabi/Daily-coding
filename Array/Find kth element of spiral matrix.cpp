//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int A[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 	 
        int top = 0;
 
        int bottom = n - 1;
 
        int left = 0;
 
        int right = m - 1;
 
        int count = 0;
 
       while (count < k && top <= bottom && left <= right)
      {
 
            // Traverse top row
 
            for (int i = left; i <= right && count < k; i++) {
 
                count++;
 
                if (count == k)
 
                    return A[top][i];
 
         }
 
            top++;
 
            // Traverse right column
 
            for (int i = top; i <= bottom && count < k; i++)
           {
 
                count++;
 
                if (count == k)
 
                    return A[i][right];
            }
 
            right--;
 
            // Traverse bottom row
 
            for (int i = right; i >= left && count < k; i--) {
 
                count++;
 
                if (count == k)
 
                    return A[bottom][i];
 
            }
 
            bottom--;
 
            // Traverse left column
 
            for (int i = bottom; i >= top && count < k; i--) {
 
                count++;
 
                if (count == k)
 
                    return A[i][left];
 
            }
 
            left++;
 
        }
 
return -1; // kth element not found
 
        }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends
