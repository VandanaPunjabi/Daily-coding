#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){

      for(int i=0;i<n-1;i++){
      	int midindex = i;
      	
      	for(int j=i+1; j<n; j++){
      		
      		if(arr[j] < arr[midindex]){
      			
      			midindex = j;
			  }
		  }
		  
		  if(midindex!=i){
		  	swap(arr[midindex],arr[i]);
		  }
	  }
}

void printArray(int arr[], int n){
	
	int i;
	for(i =0; i<n ; i++){
		cout<<arr[i]<<" ";
	
	}
}
int main(){
	
//	int numbers[9] = {9,5,3,2,1,8,7,4,6};

int n;
cin>>n;

int arr[n];

for(int i=0;i<n;i++){
	cin>>arr[i];
}
	
	
	selectionSort(arr,n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	//cout<<"sorted array :";
	//printArray(arr,n);
	return 0;
	
	
}
