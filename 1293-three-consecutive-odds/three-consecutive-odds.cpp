class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int flag = 3;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2!=0)
                flag--;
            else
            {
                flag=3;
            }
            if(flag==0)
                return true;
        }
        return false;
    }
};