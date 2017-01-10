class NumArray {
public:
    NumArray(vector<int> &nums) {
        a = nums;
        for (int i = 1; i < nums.size(); i++) {
            a[i] += a[i - 1];
        }
    }

    int sumRange(int i, int j) {
        if(i == 0) return a[j];
        else return a[j]-a[i - 1];
    }
private:
    vector<int> a;
};


// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);