int seconds(int n, vector<int> a){

      int smallest = a[0];
      int ssmallest = INT_MAX;

      for(int i=0;i<n;i++){
         if(a[i] < smallest){
             smallest = a[i];
         }
      }

      for(int i=0;i<n;i++){
          if(a[i]!=smallest && a[i] < ssmallest){
              ssmallest = a[i];
          }
      }
      return ssmallest;
}
int secondl(int n, vector<int> a){

    int largest = 0;
    int secondla = 0;

    for(int i=0;i<n;i++){
        if(a[i] > largest){
            largest = a[i];
        }
    }

    for(int i=0;i<n;i++){
        if(a[i] != largest && a[i] > secondla){
           secondla = a[i];
        }
    }

    return secondla;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.

    int secondlargest = secondl(n,a);
    int secondsmallest  =seconds(n,a);

    return {secondlargest,secondsmallest};
}
