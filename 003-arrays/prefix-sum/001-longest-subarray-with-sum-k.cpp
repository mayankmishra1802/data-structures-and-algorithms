#include <bits/stdc++.h>
using namespace std;

class Solution {  //time complexity: O(n) 
  public:
    int longestSubarray(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int n=nums.size();
        int prefix_sum=0;
        int length=0;
        for(int i=0;i<n;i++){
            prefix_sum+=nums[i];
            if (prefix_sum == k) {
                length = i + 1;
            }
            auto it=m.find(prefix_sum-k);
            if(it!=m.end()){
                length=max(length,i-it->second);
            }
            if(m.find(prefix_sum)==m.end()){
                m[prefix_sum]=i;
            }

            
        }
        return length;
    }
};
