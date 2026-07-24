#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>r;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    r.push_back({i,j});
                }
            }
        }
        for(int i=0;i<r.size();i++){
                int col=r[i][0];
            for(int j=0;j<n;j++){
                matrix[j][col]=0;
            }
                int row=r[i][1];
            for(int j=0;j<m;j++){
                matrix[row][j]=0;
            }
        }
        
    }
};