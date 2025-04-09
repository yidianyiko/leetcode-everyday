class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        //排序
        //确认没有小于 k 的值
        // 去除重复值
        //身下数字 n，
        // return n 或 n +1
        unordered_set<int> st;
        for (int x : nums) {
            if (x < k){
                return -1;
            } else if( x > k){
                st.insert(x);
            }
        }
        return st.size();
    }
};