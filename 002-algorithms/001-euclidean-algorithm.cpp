#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int gcd(int n1, int n2) { //time complexity O(log(min(n1,n2)))
        
        int greater = max(n1, n2);
        int smaller = min(n1, n2);

        while (greater % smaller != 0) {
            int remainder = greater % smaller;
            greater = smaller;
            smaller = remainder;
        }

        return smaller;
    }
};