//ref: https://discuss.leetcode.com/topic/16797/very-concise-o-log-min-m-n-iterative-solution-with-detailed-explanation/38
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size(), size2 = nums2.size();
        //nums2 is shorter than nums1
        if(size1 < size2) return findMedianSortedArrays(nums2, nums1);
        
        //nums2 is NULL
        if(size2 == 0) return ((double)nums1[(size1-1)/2]+(double)nums1[size1/2])/2;
        
        int low = 0, high = size2*2;
        while(low <= high){
            //cut positions(2*size2+1 including one cut position) in nums2
            int mid2 = (low+high)/2;
            //cut positions in nums1 depends on nums2
            int mid1 = size1 + size2 - mid2;
            
            //boundary
            double left1 = (mid1 == 0) ? INT_MIN : nums1[(mid1-1)/2];
            double right1 = (mid1 == size1*2) ? INT_MAX : nums1[mid1/2];
            double left2 = (mid2 == 0) ? INT_MIN : nums2[(mid2-1)/2];
            double right2 = (mid2 == size2*2) ? INT_MAX : nums2[mid2/2];
            
            if(left1 > right2) low = mid2 + 1;
            else if(left2 > right1) high = mid2 - 1;
            else return (max(left1, left2) + min(right1, right2))/2;
        }
        return -1;
    }
};