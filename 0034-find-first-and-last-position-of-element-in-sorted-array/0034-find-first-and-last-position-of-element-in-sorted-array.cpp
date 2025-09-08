class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> range(2, -1);
        int n = nums.size();

        // --- find first occurrence ---
        int lo = 0, hi = n - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) {
                range[0] = mid;
                hi = mid - 1; // move left to find first
            } else if (nums[mid] < target) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        // --- find last occurrence ---
        lo = 0, hi = n - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) {
                range[1] = mid;
                lo = mid + 1; // move right to find last
            } else if (nums[mid] < target) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        return range;
    }
};
