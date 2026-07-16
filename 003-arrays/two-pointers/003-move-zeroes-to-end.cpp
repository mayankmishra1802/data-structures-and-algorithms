#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) { //time complexity O(n)
        int n=nums.size();
        int i=0,j=0;
        while(j<n){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
            j++;
        }
    }
};