class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s1;
        int n =nums.size();
        for(int i=0;i<n;i++){
            s1.insert(nums[i]);
        }
        int index=0;
        for(auto it:s1){
            nums[index]=it;
            index++;
        }
        return index;
    }
};