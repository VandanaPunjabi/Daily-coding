//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int k)
    {
        // Write Your Code here
        
        int min_cost = 0;
        int max_cost = 0;
        
        sort(candies,candies+N);
        
        int i=0;
        int j = N;
        
        while(i<j){
            
            min_cost = min_cost + candies[i];
            i++;
            j = j-k;
        }
        
        reverse(candies,candies+N);
        
        i=0;
        j=N;
        
        while(i<j){
            
            max_cost = max_cost  +candies[i];
            i++;
            j=j-k;
        }
        
        return{min_cost,max_cost};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends
