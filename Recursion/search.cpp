#include<bits/stdc++.h>
using namespace std;

bool find(int *arr, int size, int k){
	
	if(size==0){
		return false;
	}
	if(arr[0] == k){
		return true;
	}
	else{
		bool reminPart = find(arr+1,size-1,k);
		return reminPart;
	}
}

int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	bool ans = find(arr,n,k);
	
	if(ans){
		cout<<"Key found"<<endl;
	}
	else{
		cout<<"key not found"<<endl;
	}
	return 0;
}
