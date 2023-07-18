//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    
	    
	    
	    sort(arr,arr+n);
	    int middle = arr[1];
	    int largest = arr[0];
	    
	 if(arr[0]==arr[n-1]){
	     return -1;
	 }
	   
	  if(arr[0] < arr[1] && arr[1]==arr[n-1]){
	      return arr[0];
	  }
	   
	   
	    for(int i=0;i<n;i++){
	        
	        if(arr[i] > largest ){
	            largest = arr[i];
	        }
	    }
	    
	    for(int i=0;i<n;i++){
	        
	        if( middle < arr[i] && arr[i] < largest){
	            middle = arr[i];
	        }
	        
	    }
	    
	    return middle;
	    
	      
        return -1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
