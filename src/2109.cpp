class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res;
        spaces.push_back(s.size());
        for( int tmp = 0; int it:spaces){
            res += s.substr(tmp, it - tmp);
            tmp  = it;
            res += " ";
        }
        res.pop_back();
        return res;
    }
};