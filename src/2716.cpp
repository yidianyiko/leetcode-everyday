class Solution {
    public:
        int minimizedStringLength(string s) {
            std::map<char ,int> res;
            for(char t: s){
                res[t]++;
            }
            return res.size();
        }
    };