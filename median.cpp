class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i,j;
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        int n=nums1.size(),left=0;
        int right=n-1;
        if(n%2!=0)
        {
            return nums1[right/2];
        }
        else if(n%2==0)
        {
            float a=right/2;
            return (float)(nums1[a]+nums1[a+1])/2;
        }
        return 0;

        
    }
};
