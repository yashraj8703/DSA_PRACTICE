class Solution {
public:
    bool checkIfPangram(string s) {
        set<char> s1;
        for (int i = 0; i < s.size(); i++) {
            s1.insert(s[i]);
        }
        string str = "abcdefghijklmnopqrstuvwxyz";
        set<char> s2;
        for (int i = 0; i < str.size(); i++) {
            s2.insert(str[i]);
        }
        return s1 == s2;
    }
};