class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candicate = 0;
        int count = 0;

        for (int num : nums) {
            if (count == 0) {
                candicate = num;
            }
            if(num == candicate) {
                count++;
            } else {
                count--;
            }
        }
        return candicate;
    }
};