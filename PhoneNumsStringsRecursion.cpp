class Solution {
public:
    vector<string> ans;
    unordered_map<char, string> digitToChar = {
        {'2', "abc"}, {'3', "def"}, {'4', "ghi"},
        {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
        {'8', "tuv"}, {'9', "wxyz"}
    };

    void backtrack(string &digits, int index, string &path) {
        if (index == digits.size()) {
            ans.push_back(path);
            return;
        }

        string letters = digitToChar[digits[index]];
        for (char ch : letters) {
            path.push_back(ch);                 // choose
            backtrack(digits, index + 1, path); // explore
            path.pop_back();                    // un-choose
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return ans;
        string path;
        backtrack(digits, 0, path);
        return ans;
    }
};

