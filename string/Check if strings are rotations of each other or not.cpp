//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        int l1 = s1.size();
        int l2 = s2.size();
        
        if(l1!=l2){
            return false;
        }
        
        queue<char>q1,q2;
        
        for(int i=0;i<l1;i++){
            q1.push(s1[i]);
            q2.push(s2[i]);
        }
        
        while(l2--){
            
            char ch = q2.front();
            q2.pop();
            q2.push(ch);
            
            if(q1==q2){
                return true;
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends
