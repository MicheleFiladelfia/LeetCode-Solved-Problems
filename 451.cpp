class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(int i = 0 ; i < s.size() ; i++){
            freq[s[i]]++;
        }

        priority_queue<pair<int,char>> pq;
        for(auto [a,b] : freq){
            pq.push(*new pair<int, char>(b,a));
        }

        s = "";
        while(!pq.empty()){
            for(int i = 0 ; i < pq.top().first ; i++){
                s+=pq.top().second;
            }

            pq.pop();
        }

        return s;
    }
};