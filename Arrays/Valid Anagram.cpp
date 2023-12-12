class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int> hash;
        if(s.size() != t.size()){
            return false;
        }
        for(int i=0; i<s.size(); i++){
            hash[s[i]]++;
        }
        for(int i=0; i<t.size(); i++){
            hash[t[i]]--;
            if(hash[t[i]]<0){
                return false;
            }
        }
        return true;
    }
};

/*
FIRST APPROACH
Hash map and compare hash
Time: O(n)
Memory: O(n)?

SECOND APPROACH
Sort strings and compare them
Time: O(nlogn)
Memory: O(1)
*/
