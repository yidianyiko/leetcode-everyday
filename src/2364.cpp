class Solution {
public:
using ll = long long;
    long long countBadPairs(vector<int>& nums) {
        unorderd_map<int , int> mp;
        ll res = 0;
        for (int  1 = 0; i < nums.size(); i++) {
            res += i - mp[nums[i] - i];
            mp[nums[i] - i]++;
        }
        return res;
    }
};
