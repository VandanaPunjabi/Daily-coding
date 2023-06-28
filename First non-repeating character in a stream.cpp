//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    
		    char first;
		    string ans="";
		    
		    ans.push_back(A[0]);
		    first=A[0];
		    
		    map<char,int>mp;
		    mp[A[0]]++;
		    
		    for(int i=1; i<A.size(); i++){
		        
		         mp[A[i]]++;
		        
		        if(mp.find(A[i]) != mp.end() && mp[A[i]] > 1){
		            
		             if(mp[first] > 1){
		                 
		                 ans.push_back('#');
		             }
		             else{
		                 ans.push_back(first);
		             }
		        }
		        else{
		            
		            if(mp[first] > 1){
		                
		                first=A[i];
		                ans.push_back(A[i]);
		            }
		            else{
		                ans.push_back(first);
		            }
		            
		            
		        }
		        
		       
		    }
		    
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
