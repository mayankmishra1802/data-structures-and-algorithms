#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) { //time complexity O(n)
        int n=nums.size();
        int i=0,j=i+1;
        int k=1;
        while(j<n){
            if(nums[i]!=nums[j]){
                i++;
                swap(nums[i],nums[j]);
                k++; 
            }
            j++;
        }
        return k;

    }
};