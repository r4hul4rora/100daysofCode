// 735. Asteroid Collision

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        vector<int>ans;
        for(auto i:asteroids){
            if(i >= 0){
                st.push(i);
            }
            else{
                while(!st.empty() && st.top()>0 && abs(i)>st.top()){
                    st.pop();
                }
                if(!st.empty() && abs(i)==st.top()){
                    st.pop();
                }
                else{
                    if(st.empty() || st.top() < 0){
                    st.push(i);
                    }
                }
            }
        }
         while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};