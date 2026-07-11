class Solution {
public:
    int countDigit(int n) {  //time complexity O(log n)
        int cnt=0;
        while(n!=0){
            cnt++;
            n=n/10;
        }
        return cnt;
    }
};