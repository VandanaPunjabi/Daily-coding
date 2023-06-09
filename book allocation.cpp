#include<bits/stdc++.h>
using namespace std;


bool isPossible(int arr[], int n, int m, int mid){
	
	int pageCount = 0;
	int studentCount = 1;
	
	for(int i=0;i<n;i++){
		
		if(pageCount + arr[i] <= mid){
			
			pageCount += arr[i];
		}
		else{
			
			studentCount++;
			if(studentCount > m || pageCount > mid){
				return false;
			}
			else{
				pageCount = arr[i];
			}
		}
	}
	return true;
}

int main(){
	
	int n;
	cin>>n;
	int m;
	cin>>m;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int sum = 0;
		for(int i=0;i<n;i++){
		sum += arr[i];
	}
	
	int s = 0;
	int e = sum;
	int mid = s + (e - s)/2;
	int ans = - 1;
	for(int i=0;i<n;i++){
		
		if(isPossible(arr,n,m,mid)){
			ans = mid;
			e = mid - 1;
		}
		else{
			s = mid + 1;
		}
		mid = s + (e - s)/2;
	}
	cout<<ans<<" ";
}
