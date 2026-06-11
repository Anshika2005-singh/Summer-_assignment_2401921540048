class Solution {
public:
    void generate(int open, int close, int n,
                  string &s, vector<string> &ans) {

        if (open == n && close == n) {
            ans.push_back(s);
            return;
        }
        if (open < n) {
            s.push_back('(');
            generate(open + 1, close, n, s, ans);
            s.pop_back();      // Backtrack
        }
        if (close < open) {
            s.push_back(')');
            generate(open, close + 1, n, s, ans);
            s.pop_back();      // Backtrack
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s = "";
        generate(0, 0, n, s, ans);
        return ans;
    }
};-
