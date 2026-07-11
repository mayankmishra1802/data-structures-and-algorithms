#include<bits/stdc++.h>
using namespace std;

class Solution { 
public:
    int reverse(int x) {  // time complexity O(log n)
        long long n=0; 
        int r; 
        while(x!=0){
            r=x%10;
            n=n*10+r;
            x=x/10;
        }
        
        if(n>INT_MAX || n<INT_MIN){ //check for overflow
            return 0;
        }

        return (int)n;
    }
};

/*
class Solution {  //better solution
public:
    int reverse(int x) { // time complexity O(log n)
        int y=0;
        while(x!=0){
            int d=x%10;
            if(y>INT_MAX/10){
                return 0;
            }
            else if(y<INT_MIN/10){
                return 0;
            }
            y=y*10+d;
            
            x/=10;
        }
        return y;
    }
};
*/