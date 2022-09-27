class Solution {
public:
    string pushDominoes(string dominoes) {
        int N = dominoes.size();
        vector<int> forces(N,0);
        
        int force = 0;
        for(int i = N-1 ; i >= 0 ; i--){
            if(dominoes.at(i) == 'L'){
                force = N;
            }else if(dominoes.at(i) == 'R'){
                force = 0;
            }else{
                force = max(force-1,0);
            }
            
            forces[i] += force;
        }
        
        
        force = 0;
        for(int i = 0; i < N; i++){
            if(dominoes.at(i) == 'R'){
                force = N;
            }else if(dominoes.at(i) == 'L'){
                force = 0;
            }else{
                force = max(force - 1, 0);
            }
            
            forces[i] -= force;
        }
        

        for(int i = 0 ; i < N ; i++){
            if(forces.at(i) > 0){
                dominoes.at(i) = 'L';
            }else if(forces.at(i) < 0){
                dominoes.at(i) = 'R';
            }
        }
        
        
        return dominoes;
    }
};