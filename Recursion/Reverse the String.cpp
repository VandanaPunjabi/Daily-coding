#include <bits/stdc++.h> 

void rev(string &str, int i, int j){
	
	if(i>j) return;

	swap(str[i],str[j]);
	i++;
	j--;
	rev(str,i,j);
}
string reverseString(string str)
{
	// Write your code here.
int n = str.size()-1;

rev(str, 0, n);
	return str;
}
