class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int c[26] = {0};
        for(char ch : magazine)
            c[ch - 'a']++;
        for(char ch : ransomNote)

            if(c[ch - 'a']-- <= 0)
                return false;
        return true;      
    }
};