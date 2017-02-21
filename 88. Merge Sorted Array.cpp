class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size = m + n - 1;
        m--; n--;
        for(; size >= 0 && m >= 0 && n >= 0; size--){
            if(nums1[m] >= nums2[n]){
                nums1[size] = nums1[m];
                m--;
            }
            else{
                nums1[size] = nums2[n];
                n--;
            }
        }
        if(n >= 0){
            while(size>=0){
                nums1[size] = nums2[n];
                n--; size--;
            }
        }
    }
};