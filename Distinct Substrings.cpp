//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int fun(string s);

int main() {
    int tt;
    string s;
    cin >> tt;
    while (tt--) {
        cin >> s;
        cout<<fun(s)<<endl;
        
    }
    return 0;
}
// } Driver Code Ends


int fun(string s)
{
    //code here
    
    map<string,int>mp;
    
    for(int i=0;i<s.size()-1;i++){
        
        string ans = "";
        ans.push_back(s[i]);
        ans.push_back(s[i+1]);
        mp[ans]++;
    }
    return mp.size();
}
