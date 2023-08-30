#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size){
	
	if(size==0 || size==1){
		return true;
	}
	
	if(arr[0] > arr[1]){
		return  false;
	}
	else{
	bool isSort  =	isSorted(arr+1,size-1);
	return isSort;
	}
}
int main(){
		int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
bool ans =	isSorted(arr,n);
	
	if(ans){
		cout<<"Numbers are sorted"<<endl;
	}
	else{
		cout<<"Numbers are not sorted"<<endl;
	}
	
	return 0;
}
