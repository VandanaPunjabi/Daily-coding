//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
        if (n < 3) return n;

        long long prev = 1, curr = 1, next = 2;
        const long long MOD = 1000000007;

        for (int i = 3; i <= n; i++) {
            long long temp = next;
            next = (prev + curr + next) % MOD;
            prev = curr;
            curr = temp;
        }

        return next;
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends
