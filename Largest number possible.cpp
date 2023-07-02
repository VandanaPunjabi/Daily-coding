//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
         int check=9*N;
        if(S==0 && N==1){
            return "0";
        }
        if(S==0){
            return "-1";
        }
        
        if(S>check){
            return "-1";
        }
        int a=S/9;
 
        string str="";
        if(a>=1){
            for(int i=0;i<a;i++){
                str=str+'9';
            }
            
        if(S%9!=0){
            int val=S%9;
            string temp=to_string(val);
                str=str+temp;
            }
            for(int i=str.length();i<N;i++){
                str=str+'0';
            }

        }
        
        else{
            int x=S%9;
          str=str+to_string(x);
          for(int i=1;i<N;i++){
              str=str+'0';
          }
        }
        
        
        
        return str;
        
        // code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
