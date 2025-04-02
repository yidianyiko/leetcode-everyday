class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        //方法1：遍历 j*k < i
        // max(i) min(j*k)
        //贪心
        int n = nums.size();
        long long res = 0;
        for (int k = 2; k < n; k++){
            int m = nums[0];
            for(int j = 1; j < k; j++){
                res = max(res, (long long)(m - nums[j])*nums[k]);
                 m = max(m, nums[j]);
            }
        }
        return res;
    }
};