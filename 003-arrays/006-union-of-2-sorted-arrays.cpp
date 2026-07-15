#include <bits/stdc++.h>
using namespace std;

class Solution { 
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) { //time complexity O(n + m)
        vector<int> unionarr;
        int n = nums1.size(), m = nums2.size();
        int i = 0, j = 0;

        while (i < n && j < m) {

            if (!unionarr.empty() && unionarr.back() == nums1[i]) {
                i++;
            }
            else if (!unionarr.empty() && unionarr.back() == nums2[j]) {
                j++;
            }
            else if (nums1[i] == nums2[j]) {
                unionarr.push_back(nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j]) {
                unionarr.push_back(nums1[i]);
                i++;
            }
            else {
                unionarr.push_back(nums2[j]);
                j++;
            }
        }

        while (i < n) {
            if (unionarr.empty() || unionarr.back() != nums1[i]) {
                unionarr.push_back(nums1[i]);
            }
            i++;
        }

        while (j < m) {
            if (unionarr.empty() || unionarr.back() != nums2[j]) {
                unionarr.push_back(nums2[j]);
            }
            j++;
        }

        return unionarr;
    }
};