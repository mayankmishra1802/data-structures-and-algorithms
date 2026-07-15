#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) { //time complexity O(n)
        int n=nums.size();
        int sum=(n*(n+1))/2;
        int sumOfArray=0;
        for(int i=0;i<n;i++){
            sumOfArray+=nums[i];
        }
        int missingNo=sum-sumOfArray;
        return missingNo;
    }
};