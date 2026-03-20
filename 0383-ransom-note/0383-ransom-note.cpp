class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int letterCounts[26] = {0};
        for (char c : magazine) {
            letterCounts[c - 'a']++;
        }
        for (char c : ransomNote) {
            letterCounts[c - 'a']--;
        
            if (letterCounts[c - 'a'] <0) {
                return false;
            }
        }
        return true;


    }
};