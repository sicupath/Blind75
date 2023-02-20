class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> mv;
        map<int, int> m;
        m.clear();
        for(int i=0;i<nums.size();i++){
            if(m[target-nums[i]]!=0){
                mv.push_back(m[target-nums[i]]-1);
                mv.push_back(i);
                return mv;
            }else{
                m[nums[i]]=i+1;
            }
        }
        return mv;
    }
};

/*
Naive Sol
TC: O(n^2)
MC: O(1)

Hash Table
TC: O(n)
MC: O(n)
*/
