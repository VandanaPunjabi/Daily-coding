#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.

    for(int i=0;i<n-1;i++){

        int midin = i;

        for(int j= i+1;j<n;j++){

            if(arr[j] < arr[midin])
                midin = j;
            
        }
             swap(arr[i],arr[midin]);
    }
     
}
