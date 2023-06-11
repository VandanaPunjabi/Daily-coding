#include<bits/stdc++.h>
using namespace std; 


void selectionSort(int arr[], int n){
	
	for(int i=0;i<n-1;i++){
		
		int midindex = i;
		
		for(int j=i+1; j<n; j++){
			
			if(arr[midindex] > arr[j]){
				midindex =  j ;
			}
		}
		
		if(midindex != i){
			
			swap(arr[midindex], arr[i]);
		}
	}
}

void buubleSort(int arr[],int n){
	
	bool result = false;
	
	for(int i=1;i<n;i++){
		
		for(int j=0; j<n-i;j++){
			
			if(arr[j] > arr[j+1]){
				
				swap(arr[j],arr[j+1]);
				result = true;
			}
		}
		if(result == false){
			break;
		}
	}
   
}

void insertionSort(int arr[], int n){
	
	for(int i = 1;i<n; i++){
		int temp = arr[i];
		int j = i-1;
		for(; j>=0; j--){
			
			if(arr[j] > temp){
				//shift the lemetn to put 
				
				arr[j+1]  =  arr[j];
			}
			else{
				break;
			}
		}
		arr[j+1] = temp;
	}
	
	
}

void printArray(int arr[], int n){
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	
	int ch;
	cout<<"enter your choice   \n1.Selection \n2.bubble \n3.Insertion Sort"<<endl;
	cin>>ch;
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
	}
	

	
	switch(ch){
		
		case(1):
			selectionSort(arr,n);
	        cout<<"Sorted array is" <<endl;
	         printArray(arr,n);
	         break;
	    
	    case(2):
	    	buubleSort(arr,n);
	    	cout<<"Sorted Array is "<<endl;
	    	printArray(arr,n);
	    	break;
	    	
	    case(3):
	    	insertionSort(arr,n);
	    	cout<<"Sorted Array is "<<endl;
	    	printArray(arr,n);
	    	break;
	    	
	    	
	    	
	}
	
	

	
}
