#include<bits./stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int m  = n;
	
    if(n<0){
    	n = n*-1;
	}
	
	int ans = 0;
	int i = 0;
	
	while(n!=0){
		
		int bit = n&1;
		ans = ans + bit * (pow(10,i));
		n = n>>1;
		i++;
	}
	
	if(m<0){
		cout<<"-"<<ans<<endl;
	}
	else{
		cout<<ans<<endl;
	}
	
}
