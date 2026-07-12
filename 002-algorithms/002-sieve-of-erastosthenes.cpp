#include<bits/stdc++.h>
using namespace std;    
int main(){ //Algo to find all prime numbers from 1 to n //time complexity O(nlog(logn))
    int n=30;
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;
    for(int i=2; i*i<=n; i++){
        if(prime[i]){
            for(int j=i*i; j<=n; j+=i){
                prime[j] = false;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(prime[i]){
            cout << i << " ";
        }
    }
    return 0;
}