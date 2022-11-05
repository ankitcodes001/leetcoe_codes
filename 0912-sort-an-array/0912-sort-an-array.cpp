class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        MergesortHelper(nums, 0, size(nums) - 1);
        return nums;
    }
private:
    void MergeTwoSortedArray(vector<int>& nums, int left, int mid, int right) {
        vector<int> sorted;
        sorted.reserve(right - left + 1);
        
        int k = 0;
        int i = left;
        int j = mid + 1;
        
        while (i <= mid && j <= right) {
            if (nums[i] < nums[j]) {
                sorted[k++] = nums[i++];
            } else {
                sorted[k++] = nums[j++];
            }
        }
        
        while (i <= mid) {
            sorted[k++] = nums[i++];
        }
        
        while (j <= right) {
            sorted[k++] = nums[j++];
        }
        
        while (--k >= 0) {
            nums[right--] = sorted[k];
        }
    }
    
    void MergesortHelper(vector<int>& nums, int left, int right) {
        if (left == right) {
            return;
        }
        int mid = left + (right - left) / 2;
        MergesortHelper(nums, left, mid);
        MergesortHelper(nums, mid + 1, right);
        MergeTwoSortedArray(nums, left, mid, right);
    }
};