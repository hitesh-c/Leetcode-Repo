class Solution {
public:    
    int minDistance(string s1, string s2) {
        int m = s1.size(), n = s2.size();
        vector<vector<int>> dp(m+1, vector<int>(n+1));
        vector<int> prev(n+1);
        int topLeft, top, left;
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0) left = j;
                else if(j==0) left = i;
                else{
                    top = prev[j];
                    if(s1[i-1]==s2[j-1]) left = topLeft;
                    else left = 1 + min({topLeft, top, left});   
                }
                topLeft = prev[j];
                prev[j] = left;
            }
        }
        return prev[n];
    }
};