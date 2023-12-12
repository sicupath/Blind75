class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map<int, int> hash;
        for(int i=0;i<nums.size();i++){
            if(hash[target-nums[i]]!=0){
                res.push_back(hash[target-nums[i]]-1);
                res.push_back(i);
                return res;
            }else{
                hash[nums[i]]=i+1;
            }
        }
        return res;
    }
};

/*
NAIVE
Time: O(n^2)
Memory: O(1)

Hash Table
Time: O(n)
Memory: O(n)
*/
