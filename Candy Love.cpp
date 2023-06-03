#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
      int t;
      cin>>t;
      
      while(t--){
          
          int n;
          cin>>n;
          
          int arr[n];
          int sum= 0;
          for(int i=0;i<n;i++){
              cin>>arr[i];
          }
          
          for(int i=0;i<n;i++){
              
              sum = sum + arr[i];
          }
          
          if(sum%2==0){
              cout<<"NO"<<endl;
          }
          else{
              cout<<"YES"<<endl;
          }
      }
	return 0;
}
