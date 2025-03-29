class Solution {
    public:
        int longestCycle(vector<int>& edges) 
        {
            int n = edges.size();
            unordered_set<int> hash;
            unordered_map<int, int> mp;
            auto dfs = [&](auto&& dfs, int x, int ans)->int
            {
                if(x == -1) return -1;
                if(mp.count(x)) return ans - mp[x];
                if(hash.count(x)) return -1;
                mp[x] = ans;
                hash.insert(x);
                int ret = dfs(dfs, edges[x], ans + 1);
                mp.erase(x);
                return ret;
            };
            int ret = -1;
            for(int i = 0; i < n; i++)
            {
                if(!hash.count(i))
                    ret = max(ret, dfs(dfs, i, 0));
            }
            return ret == 0 ? -1 : ret;
        }
    };