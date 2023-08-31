#include<bits/stdc++.h>
using namespace std;

bool pali(string s , int i, int j){
	
	if(i>j) return true;
	
	if(s[i] != s[j]){
		return false;
	}
	else{
	return	pali(s,i+1,j-1);
	}
}
int main(){
	string name;
	cin>>name;
	
	bool ans = pali(name,0,name.size()-1);
	
	if(ans){
		cout<<"An palindrom"<<endl;
	}
	else{
		cout<<"Not Palindrom"<<endl;
	}
	
	
    return 0;	
}
