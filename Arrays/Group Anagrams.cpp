class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<char>, vector<string>> groups;
        for(int i=0; i<strs.size(); i++){
            vector<char> letters;
            for(int j=0; j<strs[i].size(); j++){
                letters.push_back(strs[i][j]);
            }
            sort(letters.begin(), letters.end());
            groups[letters].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto n: groups){
            res.push_back(n.second);
        }
        return res;
    }
};
