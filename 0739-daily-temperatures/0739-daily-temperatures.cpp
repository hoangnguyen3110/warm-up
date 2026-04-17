class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> answer(n, 0);
        stack<int> waitingDays;
        for (int i = 0; i< n; i++) {
            while (!waitingDays.empty() && temperatures[i] > temperatures[waitingDays.top()]) {
                int pastDayIndex = waitingDays.top();
                waitingDays.pop(); 
                answer[pastDayIndex] = i - pastDayIndex;       
            }
            waitingDays.push(i);
        }
        return answer;
    }
};