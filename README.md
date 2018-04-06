# leetcode in C++

## Problem List


### #448. Find all numbers disappeared in an array


---

## Details


### #448. Find all numbers disappeared in an array
- [Problem link & description](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/)
> Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.
Find all the elements of [1, n] inclusive that do not appear in this array.
Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.

- My codes
> 
```C++
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
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
}
```
