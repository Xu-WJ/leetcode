
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        // 1st, negative the pointer of appeared numbers.
        //      It indicates that the numbers coresponding to nagtive pointers exist in the array
        //      otherwise, the numbers corresponding positive pointers don't exist in the array
        // 2nd, find all postive pointers, i.e., the numbders don't exist in the array
        vector<int> missed_nums;
        
        for(int i = 0; i < nums.size(); i++){
            int p = abs(nums[i]) - 1;
            nums[p] = nums[p] > 0? -nums[p] : nums[p];
        }
        
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] > 0)
                missed_nums.push_back(i + 1);

        return missed_nums;
    }
};
