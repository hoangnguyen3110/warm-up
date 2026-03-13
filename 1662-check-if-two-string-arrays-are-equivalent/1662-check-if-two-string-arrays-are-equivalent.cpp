class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        std::string s1 = "";
        for (const std::string& s : word1)s1 +=s;
        std::string s2 = "";
        for (const std::string& s:word2) s2 +=s;

        return s1 ==s2;
    }
};