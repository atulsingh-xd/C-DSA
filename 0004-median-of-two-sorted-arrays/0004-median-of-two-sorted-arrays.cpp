class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         int m=nums1.size(), n=nums2.size();

        vector<int> merged;
        merged.reserve(m + n);

        merged.insert(merged.end(),nums1.begin(), nums1.end());
        merged.insert(merged.end(), nums2.begin(), nums2.end());
        
        sort(merged.begin(), merged.end());

        int x=merged.size();
        double k=0;
        if((x%2)!=0){
            int y=(x/2);
            double k=merged[y];
            return k;

        }
        else{
            float y=(x/2);
            float z=merged[y]+merged[y-1];
            double k=z/2;
            return k;
        }
        
    }
};