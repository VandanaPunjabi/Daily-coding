//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    
	   int count = 0;
	   sort(arr,arr+n);
	   
	   for(int i=0;i<n-2;i++){
	       
	       int k = i+1, j = n-1;
	       
	       while(k<j){
	           
	           if(arr[k]+arr[j]+arr[i] < sum){
	               count = count + j-k;
	               k++;
	           }
	           else if(arr[k]+arr[j]+arr[i] >= sum){
	               j--;
	           }
	       }
	   }
	   
	   return count;
	}
		 

};

//{ Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends
