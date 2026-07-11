class Solution {
  public:
    int gcd(int n1, int n2) {  //brute force approach //time complexity O(min(n1,n2)) //TLE
        int ans;
        int smaller_integer=(n1<n2)?n1:n2;
        for(int i=1;i<=smaller_integer;i++){
            if(n1%i==0 && n2%i==0){
                ans=i;
            }
        }
        return ans;
        
    }
};

/*
class Solution { //best approach
public:
    int gcd(int n1, int n2) {  //Euclidean algorithm //time complexity O(log(min(n1,n2)))
        
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
*/
