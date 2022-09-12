class Solution {
 public:
     int bagOfTokensScore(vector<int>& tokens, int P) {
       sort(tokens.begin(), tokens.end());
       int n = tokens.size();
       int i = 0, j = n-1, score = 0, ans = 0;
         
       if(n==0 || P<tokens[0]) 
           return 0;
         
       while(i<=j){
           if(P>=tokens[i]){
                P -= tokens[i++]; 
                score++;
                ans = max(ans, score);
           }else{   
               P += tokens[j--];  
               score--;
           }
       }
       return ans;
     }
};