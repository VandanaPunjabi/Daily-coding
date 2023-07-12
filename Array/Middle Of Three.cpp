#include <bits/stdc++.h> 
int middleOfThree(int x, int y, int z)
{
    // Write your code here   

    int middle = 0;

    if(x>z && x<y || x<z && x>y){
        return x;
    }
    else if(y<z && y>x || y>z && y<x){
        return y;
    }
    else{
        return z;
    }
}
