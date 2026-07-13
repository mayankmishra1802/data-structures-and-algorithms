#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) { //time complexity: O(n)
        int cnt=0,n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                cnt++;
            }
            if(cnt==2){
                return false;
            }
        }
        if(cnt==1 && nums[0]<nums[n-1]){
            return false;
        }

        return true;
    }
};

/*
class Solution { //better solution
public:
    bool check(vector<int>& nums) {
        int c = 0 ;
        int n = nums.size();
        for(int i = 0 ; i < n-1 ; i++){
            if(nums[i+1] < nums[i]){
                c++;
            }
        }
        if(nums[n-1]>nums[0]){
            c++;
        }

        if(c == 0 || c == 1){
            return true ;
        }
        else{
            return false ;
        }
    }
};
*/