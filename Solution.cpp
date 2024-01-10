class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt = 0;
        for (string& p : patterns)
            cnt += (word.find(p) != string::npos);
        return cnt;
    }
};
