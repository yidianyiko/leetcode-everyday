class Solution {
    public:
        int countPrefixes(vector<string>& words, string s) {
            return ranges::count_if(words, [&s](string& word){
                return s.starts_with(word);
            });
        }
    };