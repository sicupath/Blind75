class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> hash;
        for(int i=0; i< nums.size(); i++){
            if(hash[nums[i]]){
                return true;
            }
            hash[nums[i]]++;
        }
        return false;
    }
};

/*
The idea is improve time complexity compared to sorting O(nlogn)
by doing a tradeoff of memory, we will use a hash map O(n) and then
iterate through it in O(n)
*/
