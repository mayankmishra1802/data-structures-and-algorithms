#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& nums) { //time complexity O(n) 
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        vector<vector<int>>ans;
        for(auto it:m){
            ans.push_back({it.first,it.second});
        }
        return ans;
    }
};