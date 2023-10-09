class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0;
        int end=arr.size();
        int mid=start+(end-start)/2;

        while(start<=end){

            if(arr[mid]<arr[mid+1]){
                start=mid+1;
            }

            if(arr[mid]>arr[mid+1]){
                end=mid-1;
            }
            
        mid=start+(end-start)/2;
        }
        return mid;
    }
};