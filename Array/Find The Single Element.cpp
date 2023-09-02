#include<vector>
#include<bits/stdc++.h>

int getSingleElement(vector<int> &arr){
	// Write your code here.	
	 
	int xora = 0;
	for(int i=0;i<arr.size();i++){
		xora = xora ^ arr[i];
	}

	return xora;
}
