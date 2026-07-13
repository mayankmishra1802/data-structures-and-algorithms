#include <bits/stdc++.h>
using namespace std;

class Solution { // Time Complexity: O(n) 
public:
    int largestElement(vector<int>& nums) {
        int m=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>m){
                m=nums[i];
            }
        }
        return m;
    }
};