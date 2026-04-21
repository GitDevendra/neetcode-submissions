class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;

        for (auto &o : operations) {
            if (o == "+") {
                int n = ans.size();
                ans.push_back(ans[n - 1] + ans[n - 2]);
            } 
            else if (o == "D") {
                ans.push_back(2 * ans.back());
            } 
            else if (o == "C") {
                ans.pop_back();
            } 
            else {
                ans.push_back(stoi(o));
            }
        }

        return accumulate(ans.begin(), ans.end(), 0);
    }
};