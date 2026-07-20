#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        int buy=nums[0],sell=0,p=0;
        for(int i=1;i<n;i++){
            if(buy>nums[i]){
                buy=nums[i];
            }
            else{
                sell=nums[i];
                p=max(p,sell-buy);
            }
        }
        return p;
    }
};