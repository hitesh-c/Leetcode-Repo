class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s,e,m;
        
        s=0;
        e=size(nums)-1;
        
        m = s+(e-s)/2;
        
        // if(nums[e]<target) return e+1;
        // if(nums[s]>target) return 0;
        
        while(s<=e){
            
            if(nums[m]==target) return m;
            
            if(nums[m]<target){
                s = m+1;
            }else{
                e = m-1;
            }
            
            m= s +(e-s)/2;
        }
        
        return m;
    }
};