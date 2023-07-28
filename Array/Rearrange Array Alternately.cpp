class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
        int i=0;
        int j=n-1;
        
        vector<int>ans;
        
        
        while(i<=j){
            
             if(i==j){
                ans.push_back(arr[i]);
            }
            else{
                
                ans.push_back(arr[j]);
                ans.push_back(arr[i]);
            }
            
            j--;
            
            i++;
            
           
        }
    
    for(int i=0; i<n; i++){
        arr[i]=ans[i];
    }
    }
};
