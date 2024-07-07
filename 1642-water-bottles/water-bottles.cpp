class Solution {
public:
    int numWaterBottles(int n, int num) {
        return n + (n-1)/(num-1);
    }
};