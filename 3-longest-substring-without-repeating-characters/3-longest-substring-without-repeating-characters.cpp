class Solution {
public:
    
    int lengthOfLongestSubstring(string s) {
        
        vector<int> dict(256,-1);
        int idx=0, mx=0;
        int prev=-1;
        if(s=="") return 0;
        for(auto i: s){
            if(dict[i]>prev) prev = dict[i];
            dict[i]=idx;
            mx = max(mx, idx-prev); 
            idx++;
        }        
        return mx;
    }
};