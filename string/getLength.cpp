int getLength(char name[]){
	int count = 0;
	
	for(int i=0; name[i] != '\0'; i++){
		count++;
	}
	return count;
	
}

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	char name[20];
	cout<<" Enter your name "<<endl;
	cin>>name;
	
	
	cout<<"Length of the name is "<< getLength(name) << endl;
	
	return 0;
}
