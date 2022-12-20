class Solution{
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int> visited{0};
        stack<int> s;
        s.push(0);

        while(!s.empty()){
            int cur = s.top(); s.pop();
            for(auto x : rooms[cur]){
                if(!visited.count(x)){
                    visited.insert(x);
                    s.push(x);
                }
            }
        }

        return rooms.size() == visited.size();
    }
};