#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) { //time complexity O(n)
        int n=nums.size();
        int cnt=0,max_cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                cnt++;
            }
            else{
                max_cnt=max(cnt,max_cnt);
                cnt=0;
            }
        }
        max_cnt=max(cnt,max_cnt);
        return max_cnt;
        
    }
};