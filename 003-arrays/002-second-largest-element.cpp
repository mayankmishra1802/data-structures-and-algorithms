#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &nums) { //time complexity: O(n) 
        // code here
        int fl=INT_MIN,sl=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>fl){
                sl=fl;
                fl=nums[i];
            }
            else if(nums[i]>sl && nums[i]<fl){
                sl=nums[i];
            }
        }
        if(sl==INT_MIN){
            return -1;
        }
        return sl;
      
    }
};