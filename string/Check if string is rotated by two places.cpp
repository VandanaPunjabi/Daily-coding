//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
       
        if(str1.size() != str2.size()){
            
            return 0;
        }
        //first
        
        int n=str1.size();
        
        if(n < 3){
            
            if(n==1){
                
                if(str1[0]==str2[0]){
                    
                    return 1;
                }
                else{
                    
                    return 0;
                }
            }
            else{
                
                if(str1[0]==str2[0] && str1[1]==str2[1]){
                    
                    return 1;
                }
                else{
                    
                    return 0;
                }
            }
        }
        
        int i=2,j=0;
        int flag=0;
        
        while(i<str1.size()){
            
            if(str1[i] != str2[j]){
                flag=1;
                break;
            }
            i++;
            j++;
        }
        
        if(flag==0){
            
            if(str1[0]==str2[n-2] && str1[1]==str2[n-1]){
                
                return 1;
            }
        }
        
        
        int k=0,m=2;
        int flag1 = 0;
            while(k<str1.size()-2){
                
                if(str1[k] != str2[m]){
                    flag1 = 1;
                    break;
                }
                k++;
                m++;
            }
            
            if(flag1==0){
                if(str1[n-2]==str2[0] && str1[n-1]==str2[1]){
                    return 1;
                }
                
            }
        
        return 0;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends
