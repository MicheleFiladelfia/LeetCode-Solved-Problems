class Solution {
private:
    int n,k;
    vector<int> ans;

    void dfs(int sz, int num, int prevDigit){
        if(sz == n){
            ans.push_back(num);
            return;
        }

        for(int i = 0 ; i <= 9 ; i++){
            if(abs(i - prevDigit) == k){
                dfs(sz + 1, num * 10 + i, i);
            }
        }
    }
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        this->n = n;
        this->k = k;

        for(int i = 1 ; i <= 9 ; i++){
            dfs(1,i,i);
        }

        return ans;
    }
};
