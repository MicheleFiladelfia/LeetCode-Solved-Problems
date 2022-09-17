class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size() % 2 == 1){
            return {}; //changed is not a doubled array
        }

        sort(changed.begin(),changed.end());

        vector<int> ans;
        unordered_map<int,int> hm;

        for(auto x : changed){
            hm[x]++;
        }

        for(auto x : changed){
            if(hm[x] == 0) continue;
            if(hm[x * 2] == 0) return {}; //if x != 0 and x * 2 != 0, changed is not a doubled array
            ans.push_back(x);
            hm[x]--;
            hm[x * 2]--;
        }

        return ans;
    }
};