#include<bits/stdc++.h>
using namespace std;

class Solution { //time complexity O(n) 
public: 
    void sortColors(vector<int>& nums) {
        int i=0,k=nums.size()-1;
        int j=0;
        while(j<=k){
            if(nums[j]==0){
                swap(nums[i],nums[j]);
                i++;j++;
            }
            else if(nums[j]==1){
                j++;
            }
            else{
                swap(nums[j],nums[k]);
                k--;

            }
        }
        
    }
};