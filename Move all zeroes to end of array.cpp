class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    
	   
	   /*int k = n-1;
	 
	   for(int i=0; i<n; i++){
	 
	       if(arr[i]==0){
	           
	           
	           int temp = arr[k];
	           arr[k] = arr[i];
	           arr[i]=temp;
	           k--;
	       }
	   }*/
	   
	   int i=0,j=0;
	   
	   while(j<n){
	       
	       while(j<n && arr[j]==0){
	           
	           j++;
	       }
	       
	       if(j<n){
	           
	            arr[i]=arr[j];
	            i++;
	       }
	       
	       j++;
	      
	   }
	   
	   for(int k=i; k<n; k++){
	       
	       arr[k]=0;
	   }
	   
	}
};
