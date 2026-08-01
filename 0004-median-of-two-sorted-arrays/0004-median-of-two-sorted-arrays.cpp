class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         int m=nums1.size(), n=nums2.size();

        nums1.insert(nums1.end(),nums2.begin(), nums2.end());
        
        sort(nums1.begin(), nums1.end());

        int x=nums1.size();
        double k=0;
        if((x%2)!=0){
            int y=(x/2);
            double k=nums1[y];
            return k;

        }
        else{
            float y=(x/2);
            float z=nums1[y]+nums1[y-1];
            double k=z/2;
            return k;
        }
        
    }
};