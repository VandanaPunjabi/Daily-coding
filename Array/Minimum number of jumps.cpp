//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int max_jump= 0;
        int jump= 0;
        int sum=0;
        int i=0;
        
        while(i<n-1){
            
            max_jump = max(max_jump,arr[i]+i);    // 1 3 5 8 9 2 6 7 8 9 
            if(jump>=n-1){
                return sum;
            }
                
                if(jump==i){            
                    
                    jump = max_jump;     //4 
                    sum++;
                }
              i++;
        
        }
        
       
        return -1;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
