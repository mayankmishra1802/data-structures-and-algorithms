#include <bits/stdc++.h>
using namespace std;

class Solution { //time complexity: O(n)
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        int o=0,e=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                res[o]=nums[i];
                o+=2;
            }
            else{
                res[e]=nums[i];
                e+=2;
            }
        }
        return res;
    }
};