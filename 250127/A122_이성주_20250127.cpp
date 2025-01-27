class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int m = 0; m < s.size(); m++) {
            string str = s;
            for(int i = 0; i < m; i++) {
                str = str.substr(1) + str[0];
            }
            if(str == goal) return true;
        }
        return false;
    }
};
