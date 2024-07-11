// time complexity ---> O(nlog(logn))

#include <bits/stdc++.h>

using namespace std;

int is_prime[1000001];

void seive(){

    int maxN= 1000000;

    for(int i; i<=maxN;i++) is_prime[i]=1;
    is_prime[0] = is_prime[1] = 0;

    for(int i=2; i*i<=maxN; i++){
        if(is_prime[i]){
            for(int j=i*i; j<=maxN; j+=i){
                is_prime[j] = 0;
            }
        }
    }

}


int main(){

    return 0;
}