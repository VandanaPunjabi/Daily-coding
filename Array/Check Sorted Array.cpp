int isSorted(int n, vector<int> a) {
    // Write your code here.
      
       for(int i=0;i<n;i++){
           if(a[i-1]  <= a[i]){

           }
           else{
               return false;
           }
       }

       return true;
}
