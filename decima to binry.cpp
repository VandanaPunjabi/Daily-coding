#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n; 
	cin>>n;
	
	int ans = 0 ;
	int i = 0;
	while(n!=0){
		
		int digit = n&1;
		
		int rem = n%10;
		
		
	   ans = digit *pow(10,i) + ans;
	   
	   n = n>>1;
	   i++;
	 
	}
	
	cout<<ans<<endl;
}
