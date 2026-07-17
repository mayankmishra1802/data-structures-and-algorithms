#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int remaining=target-nums[i];
            if(m.find(remaining)!=m.end()){
                return {m[remaining],i};
            }
            m[nums[i]]=i;
        }
        return {};
    }
};