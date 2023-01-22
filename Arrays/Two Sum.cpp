class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> mv;
        map<int, int> m;
        m.clear();
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]==0){
                m[nums[i]]=i+1;
                if(m[target-nums[i]]!=0 && 2*nums[i]!=target){
                mv.clear();
                mv.push_back(m[target-nums[i]]-1);
                mv.push_back(m[nums[i]]-1);
                return mv;
            }
            }
            else if(2*nums[i]==target){
                mv.clear();
                mv.push_back(m[nums[i]]-1);
                mv.push_back(i);
                return mv;
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
