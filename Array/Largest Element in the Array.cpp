#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.

     sort(arr.begin(),arr.end());
    int maxelement = 0;

    for(int i =0;i<n;i++){

        if(arr[i] > maxelement){
            maxelement = arr[i];
        }
    }

    return maxelement;
}
