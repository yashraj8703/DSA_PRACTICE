

class Solution {
public:
    bool isSpecial(const string& sub) {
        char c = sub[0];
        for (char ch : sub) {
            if (ch != c) return false;
        }
        return true;
    }

    int maximumLength(string s) {
        int n = s.size();
        unordered_map<string, int> freq;
        int maxLength = -1;
        for (int start = 0; start < n; ++start) {
            for (int len = 1; len <= n - start; ++len) {
                string sub = s.substr(start, len);

                if (isSpecial(sub)) {
                    freq[sub]++;
                }
            }
        }
        for (auto& [sub, count] : freq) {
            if (count >= 3) {
                maxLength = max(maxLength, (int)sub.size());
            }
        }

        return maxLength;
    }
};
