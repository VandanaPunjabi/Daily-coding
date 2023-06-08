#include<bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int size,int key){
	
	int start = 0;
	int end = size-1;
	
	int mid = start + (end - start)/2;
	
	while(start <= end){
		
		if(arr[mid] == key){
			return mid;
		}
	
			
			if(key > arr[mid]){
				
				start = mid + 1;
			}
			else{
				end = mid - 1;
			}
            	int mid =start + (end - start)/2;
	}
	
	return -1;
}
int main(){
	
//	int n;
//	cin>>n;
//	
//	int arr[n];
//	int key;
//	cin>>key;
//	
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	
	int even[6] = {2,4,6,8,10,12};
	int odd[5] = {1,3,5,7,9};
	
	int index = binarySearch(even, 6, 12);
//	int index1 = binarySearch(arr, n, key);
	
	cout<<"element found at " <<index <<endl;
//	cout<<"element found at " <<index1 <<endl;
	
}
