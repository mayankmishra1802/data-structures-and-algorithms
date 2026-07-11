#include <bits/stdc++.h>   
using namespace std;

class Solution {
public:
    bool checkPalindrome(const string &str, int i,int j){ //time complexity O(n)
        if(i>j){
            return true;
        }
        if(str[i]!=str[j]){
            return false;
        }
        return checkPalindrome(str,i+1,j-1);
    }

    bool isPalindrome(string s) { //time complexity O(n)
        string str="";
        for(int i=0;i<s.size();i++){
            if(s[i]>=65 && s[i]<=90){
                str+=tolower(s[i]);
            }
            else if(s[i]>=97 && s[i]<=122){
                str+=s[i];
            }
            else if(s[i]>=48 && s[i]<=57){
                str+=s[i];
            }
        }
        if(checkPalindrome(str,0,str.size()-1)){
            return true;
        }
        return false;
    }
};