class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int p = nums.size();
        k= k%p;

       reverse(nums.begin(),nums.end());
       reverse(nums.begin(),nums.begin()+k);
       reverse(nums.begin()+k,nums.end());

       

    }
};