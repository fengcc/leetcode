class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size(), len2 = nums2.size();
        if (len1 > len2)
            return findMedianSortedArrays(nums2, nums1);
        int low = 0, high = len1, mid = (len1 + len2 + 1)/2;
        int i, j;
        while (low <= high) {
            i = (low + high)/2;
            j = mid - i;
            if (i > 0 && j < len2 && nums1[i-1] > nums2[j])
                high = i - 1;
            else if (i < len1 && j > 0 && nums1[i] < nums2[j-1])
                low = i + 1;
            else
                break;
        }
        int x1;
        if (i == 0) x1 = nums2[j-1];
        else if (j == 0) x1 = nums1[i-1];
        else x1 = max(nums1[i-1], nums2[j-1]);
        
        if ((len1 + len2) % 2 == 1) return x1;
            
        int x2;
        if (i == len1) x2 = nums2[j];
        else if (j == len2) x2 = nums1[i];
        else x2 = min(nums1[i], nums2[j]);
        
        return (x1+x2)/2.0;
    }
};
