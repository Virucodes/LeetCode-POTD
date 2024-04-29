class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
       int finalxor = 0;
       int count = 0 ;

        for(int n:nums)
        {
            finalxor = finalxor^n;
        }
        while(k || finalxor)
        {
            if((k%2)!=(finalxor%2))
            {
                count++;
            }
            k/=2;
            finalxor/=2;
        }
        return count;
    }
};