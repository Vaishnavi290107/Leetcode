class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low =0;
        int high = arr.size();
         int mid =(low+high)/2;

        while(low<high)
        {
           if(arr[mid]<arr[mid+1])
          {
            low = mid+1;
          }
           else if(arr[mid]>=arr[mid+1])
          {
            high = mid;    
          }
          mid = (low+high)/2;
          }  
          return mid;
    }
};