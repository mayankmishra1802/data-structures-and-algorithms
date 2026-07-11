class Solution {
public:
    int fib(int n) { //time complexity O(2^n)
        if(n==0 || n==1){
            return n;
        }
        return fib(n-1)+fib(n-2);
    }
};