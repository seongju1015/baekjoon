class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> resultVector;
        for (int i = 0; i < A[0].size(); ++i) {
            vector<int> tempVec;
            for (int j = 0; j < A.size(); ++j) {
                tempVec.push_back(A[j][i]);
            }
            resultVector.push_back(tempVec);
        }
        return resultVector;
    }
};
