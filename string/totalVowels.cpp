#include<iostream>
#include<string>
using namespace std;

int totalVowels(string text, int len, int index){
	int count = 0;
	if(len == 0){
		return 0;
	}
	
	char single = toupper(text[index]);
	
	if(single == 'A' || single == 'E' || single == 'I' || single == 'O' || single == 'U'){
		
		count++;
	}
	
	return count + totalVowels(text, len-1, index + 1);
}



int main(){
	
	cout<<"the string is: Hello World "<<endl;
	cout<<"The total number of vowels are" <<totalVowels("Hello World", 10 , 1)<<endl;
	
}
