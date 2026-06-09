class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = s.size();
        int m = p.size();

        if (m > n) return ans;

        vector<int> pFreq(26, 0);
        vector<int> winFreq(26, 0);

        for (int i = 0; i < m; i++) {
            pFreq[p[i] - 'a']++;
            winFreq[s[i] - 'a']++;
        }

        if (pFreq == winFreq)
            ans.push_back(0);

        for (int i = m; i < n; i++) {
            winFreq[s[i] - 'a']++;      
            winFreq[s[i - m] - 'a']--;   

            if (pFreq == winFreq)
                ans.push_back(i - m + 1);
        }

        return ans;
    }
};
