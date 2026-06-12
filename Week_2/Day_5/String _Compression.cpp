class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int index = 0;
        int n = chars.size();

        while (i < n) {
            char curr = chars[i];
            int count = 0;

            while (i < n && chars[i] == curr) {
                count++;
                i++;
            }

            chars[index++] = curr;

            if (count > 1) {
                string s = to_string(count);
                for (char ch : s) {
                    chars[index++] = ch;
                }
            }
        }

        return index;
    }
};
