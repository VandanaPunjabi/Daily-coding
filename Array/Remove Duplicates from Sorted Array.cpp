#include<set>
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
//     set<int>st;

// 	for(int i=0;i<n;i++){
// 		st.insert(arr[i]);
// 	}

//      int index = 0;
// 	 int i = 0;
// 	for(auto it:st){
//        index = it;
// 	   i++;
// 	}
//  return i;
  
  int j=0;
  for(int i=1;i<n;i++){

	  if(arr[i] != arr[j]){
		  arr[j+1] = arr[i];
		  j++;
	  }
  }
  return j+1;
}
