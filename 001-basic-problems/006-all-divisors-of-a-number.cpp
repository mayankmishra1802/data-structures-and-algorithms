#include <bits/stdc++.h>
using namespace std;

class Solution { // brute force approach //time complexity O(n) //TLE
  public:
    vector<int> getDivisors(int n) {
        vector<int>arr;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                arr.push_back(i);
            }
        }
        return arr;
        
    }
};

/*
class Solution { //optimized approach //time complexity O(sqrt(n))
  public:
    vector<int> getDivisors(int n) {
        vector<int>arr;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                arr.push_back(i);
                if (i != n / i){
                    arr.push_back(n/i);
                }
            }
        }
        sort(arr.begin(),arr.end());
        return arr;
        
    }
};
*/