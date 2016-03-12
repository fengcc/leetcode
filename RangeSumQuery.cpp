class NumArray {
public:
    NumArray(vector<int> &nums) : psum(nums.size()+1, 0) {
        partial_sum(nums.begin(), nums.end(), psum.begin()+1);
    }

    int sumRange(int i, int j) {
        if (i < 0 || j >= psum.size()-1)
            return 0;
        else
            return psum[j+1] - psum[i];
    }
private:
    vector<int> psum;
};


// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);
