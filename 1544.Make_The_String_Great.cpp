class Solution {
public:
    string makeGood(string s) {
        string result = "";

        for (char &ch : s) {
            if (!result.empty() && abs(result.back() - ch) == 32) {
                // The characters are case-insensitive equivalents
                result.pop_back();
            } else {
                result.push_back(ch);
            }
        }

        return result;
    }
};