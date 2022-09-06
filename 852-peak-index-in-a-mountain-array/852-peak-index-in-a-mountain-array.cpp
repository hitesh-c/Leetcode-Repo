class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
     
        int s,e,mid;
        
        s=0; e=size(arr)-1; mid= s+(e-s)/2;
        
        while(s<=e){
            cout<<s<<e<<mid;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
            
            if(arr[mid]<arr[mid-1]) e = mid;
            
            if(arr[mid]<arr[mid+1]) s= mid+1;
            
            mid = s+(e-s)/2;
        }
        
        return -1;
    }
};