#include <bits/stdc++.h> 
char toLower(char ch){
    if(ch>=0 && ch<=9)
        return ch;
    else if(ch>='a' && ch<='z')
        return ch;
    else
        return ch+32;
}

bool check(char ch){
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch>= '0' && ch<= '9')
        return false;
    else
        return true;
}

bool checkPalindrome(string s)
{
    int st = 0;
    int e = s.size()-1;
    while(st<e){
        if(check(s[st]))
            st++;
        else if(check(s[e]))
            e--;  
        else if(toLower(s[st]) != toLower(s[e]))
            return false;
        else{
            st++;
            e--;
        }
    }

    return true;
}
