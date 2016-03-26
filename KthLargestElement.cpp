class Solution {
public:
    int partition(vector<int> &nums, int low, int high)
    {
        int pivot = nums[low];
        while (low < high) {
            while (low < high && nums[high] <= pivot) --high;
            nums[low] = nums[high];
            while (low < high && nums[low] >= pivot) ++low;
            nums[high] = nums[low];
        }
        nums[low] = pivot;
        return low;
    }
    int findKthLargest(vector<int>& nums, int k) {
        int low = 0, high = nums.size()-1;
        int mid = partition(nums, low, high);
        while (mid != k-1) {
            if (mid > k-1)
                high = mid - 1;
            else
                low = mid + 1;
            mid = partition(nums, low, high);
        }
        return nums[mid];
    }
};
