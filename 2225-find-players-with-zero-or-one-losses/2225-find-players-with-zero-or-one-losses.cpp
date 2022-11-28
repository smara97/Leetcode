class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        map<int, vector<int>>players;
        vector<int>wins;
        vector<int>los;
        
        for(auto e:matches){
            
            if(players.find(e[0])==players.end())
                 players[e[0]] = {0, 0, 0};
            
            if(players.find(e[1])==players.end())
                 players[e[1]] = {0, 0, 0};
            
            players[e[0]][0]++;
            players[e[0]][1]++;
            
            players[e[1]][1]++;
            players[e[1]][2]++;
        }
        
        for(auto e:players){
            if(e.second[0] == e.second[1] && e.second[1]){
                wins.push_back(e.first);
            }
            
            if(e.second[2]==1 && e.second[1]){
                los.push_back(e.first);
            }
        }
        
        
        return {wins, los};
        
    }
};