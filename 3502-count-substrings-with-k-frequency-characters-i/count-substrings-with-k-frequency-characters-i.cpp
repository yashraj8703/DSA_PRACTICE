class Solution {
public:
    int numberOfSubstrings(string s, int k) {
     int l=0;
        int r=0;
        map<char,int>f;
        int c=0;
        while(r<s.size())
        {
            f[s[r]]++;
            while(f[s[r]]==k)
            {
                f[s[l]]--;
                if(f[s[l]]<1)
                {
                    f.erase(s[l]);
                }
                l++;
            }
            c+=l;
            r++;
        }
        return c;
    }
};