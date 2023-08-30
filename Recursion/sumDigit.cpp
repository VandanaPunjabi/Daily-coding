#include<bits/stdc++.h>
using namespace std;

int getSum(int *arr, int size){
	
	if(size==0){
		return 0;8
	}
	if(size==1){
		return arr[0];
	}
	
	int remainingSum = getSum(arr+1,size-1);
	int sum = arr[0] + remainingSum;
	return sum;
}
int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
  int sum =	getSum(arr,n);
  cout<<sum<<endl;
  
  return 0;
}
