class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res(nums.size());
        int p = 0, n = 1;
        for (int x : nums) {
            if (x > 0) res[p] = x, p += 2;
            else       res[n] = x, n += 2;
        }
        return res;
    }
};