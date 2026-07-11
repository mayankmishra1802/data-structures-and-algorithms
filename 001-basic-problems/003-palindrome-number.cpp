class Solution {
public:
    bool isPalindrome(int x) { //time complexity O(log n)
        if(x<0){
            return false;
        }
        long long orgNo=x; 
        long long revNo=0; 
        while(x!=0){
            int r=x%10;
            revNo=revNo*10+r;
            x=x/10;
        }
        if(orgNo==revNo){
            return true;
        }
        return false;

    }
};