//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string transform(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << transform(s) << endl;
    }
return 0;
}


// } Driver Code Ends


string transform(string s){
    //complete the function here
    
     string ans="";
    int count=1;
    for(int i=0;i<s.length();i++)
        s[i]=(char)tolower(s[i]);
    for(int i=0;i<s.length();i++)
    {
     if(s[i]!=s[i+1])
     {
      ans=ans+to_string(count)+s[i];
      count=1;
     }
     else
         count++;
    }
    return ans;
}


