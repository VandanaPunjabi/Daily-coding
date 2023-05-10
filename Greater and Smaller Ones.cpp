//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Geeks {
  public:
  void greaterKSorted(vector<int>&arr, int k) {
      
      sort(arr.begin(),arr.end());
      int f=0;
      set<int>ans;
      int temp=-1;
      for(int i=0;i<arr.size();i++){
          
          if(arr[i]>=k && temp!=arr[i]){
              
              f=1;
              cout<<arr[i]<<" ";
              temp = arr[i];
          }
      }
      
      if(f==0){
          cout<<"-1";
      }
  }
  void smallerKSorted(vector<int>&arr, int k) {
      
      sort(arr.begin(),arr.end());
      int f1=0;
      set<int>s;
      int temp = -1;
      for(int i=0;i<arr.size();i++){
          
          if(arr[i]<k && temp!=arr[i]){
              
              f1=1;
              cout<<arr[i]<<" ";
              temp = arr[i];
          }
      }
      
      if(f1==0){
          cout<<"-1";
      }
  }
  
};

//{ Driver Code Starts.
int main() {
    
    int t; 
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n;
        cin >> k;
        
        vector<int>arr(n);
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            arr[i] = x;
        }
        Geeks obj;
        obj.greaterKSorted(arr, k);
        cout<<endl;
        obj.smallerKSorted(arr, k);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
