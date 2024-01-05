class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freqs;
        map<int,vector<int>> hash;
        vector<int> res;
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            freqs[nums[i]]++;
        }
        for(const auto& frq: freqs){
            hash[frq.second].push_back(frq.first);
        }
        for (auto rit = hash.rbegin(); rit != hash.rend(); ++rit) {
            if(count<k){
                vector<int> nums = (rit->second);
                res.insert(res.end(), nums.begin(), nums.end());
                count += (nums.size());
            }
            
        }
        return res;
    }
};
