// time complexity ---> O(log(n))

#include <bits/stdc++.h>

using namespace std;

int binaryExponentiation(int a,int n){
    
    int res =1;
    while(n){
        if(n%2) {
            res *=a, n--;
        }
        else{
            a*=a, n/=2;
        }
    }

    return res; 
}


int main(){
    binaryExponentiation(2,13);
    return 0;
}