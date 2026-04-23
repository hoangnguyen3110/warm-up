class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        for (int asteroid : asteroids) {
            bool survives = true;
            while (!st. empty() && st.back() > 0 && asteroid <0) {
                if (st.back() < abs(asteroid)) {
                    st.pop_back();
                    continue;
                }
                else if (st.back() == abs(asteroid)) {
                    st.pop_back();
                    survives = false;
                    break;
                }
                else {
                    survives = false;
                    break;
                }
            }
            if (survives) {
                st.push_back(asteroid);
            }
        }
        return st;
    }
};