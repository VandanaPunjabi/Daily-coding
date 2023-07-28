//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    string LargestEven(string s){
        //complete the function here
        
         int i, j;
        char a, b;
        sort(s.begin(),s.end());
        reverse(s.begin(),s.end());
        j = s[s.length()-1]-'0';
        if(j % 2 == 1){
            for(i=s.length()-1; i>=0; i--){
              j = s[i]-'0';
              a = s[i];
              if(j%2==0){
                b = s[s.length()-1];
                s[s.length()-1]=a;
                s[i]=b;
                sort(s.begin(),s.end()-1);
                reverse(s.begin(),s.end()-1);
                break;
              }
            }
        }
        return s;
    }  
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.LargestEven(s) << "\n";
    }
return 0;
}


// } Driver Code Ends
