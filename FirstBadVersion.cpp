// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, high = n;
        while (low < high) {
            int mid = low + (high - low) / 2; //不能使用 mid = (low + high) / 2，因为high和low很大时可能会溢出。
            if (isBadVersion(mid))
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};
