#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	int n;
	cin>>n;
	
	int m;
	cin>>m;
	
	if(n>m){
	    cout<<abs(n-m)<<endl;
	}
	else{
	    cout<<"0"<<endl;
	}
	
	}
	return 0;
}
