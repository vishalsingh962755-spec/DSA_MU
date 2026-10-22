class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return 0;
        }
        bool asc = true;
        bool desc = true;
        for (int i = 0; i < n; i++) {
            int next = nums[(i + 1) % n];
            if (next != (nums[i] + 1) % n) {
                asc = false;
            }
            if (next != (nums[i] - 1 + n) % n) {
                desc = false;
            }
        }
        if (!asc && !desc) {
            return -1;
        }
        int pos = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                pos = i;
            }
        }
        if (asc) {
            if (pos == 0) {
                return 0;
            }
            return min(pos, n - pos + 2);
        }
        int a = 1 + (n - 1 - pos);
        int b = (pos + 1) % n + 1;
        return min(a, b);
    }
};