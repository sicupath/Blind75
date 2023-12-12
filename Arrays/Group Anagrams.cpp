class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>, vector<string>> groups;
        for(int i=0; i<strs.size(); i++){
            map<char,int> letters;
            for(int j=0; j<strs[i].size(); j++){
                letters[strs[i][j]]++;
            }
            groups[letters].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto n: groups){
            res.push_back(n.second);
        }
        return res;
    }
};

/*
We have to store groups and for the key instead of sorting in O(nlong) we use
the array of letters that is O(n) and is convenient for memory also
Time: O(mn)
Memory: O(mn)
*/
