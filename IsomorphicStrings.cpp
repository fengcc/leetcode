class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> mapS(256, -1), mapT(256, -1);
        int n = s.size();
        
        for (int i = 0; i < n; ++i) {
            if (mapS[s[i]] != mapT[t[i]])
                return false;
            mapS[s[i]] = mapT[t[i]] = i;
        }
        
        return true;
    }
};