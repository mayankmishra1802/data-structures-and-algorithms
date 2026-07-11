#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countDigits(int n){ //time complexity O(log n)
        int cnt=0;
        while(n!=0){
            cnt++;
            n=n/10;
        }
        return cnt;
    }
    bool armstrongNumber(int n) { //time complexity O(log(n))
         int cnt=countDigits(n);
        int x=n;
        int m=0;
        int ans=0;
        while(x!=0){
            int r=x%10;
            ans+=pow(r,cnt); //in this case time complexity O(1) because the maximum value of cnt is 10
            x=x/10;
        }
        if(ans==n){
            return true;
        }
        return false;
        
    }
};