class StockSpanner {
public:
    map<int,int>mp;
    StockSpanner() {
        mp.clear();
    }
    
    int next(int price) {
        
        int cnt = 1;
        int mx = 1;
        for(auto e: mp){
            
            if(price>=e.first){
                cnt+=e.second;
                mp.erase(e.first);
            }
            
            mx = max(mx, cnt);
        }
        mp[price] = mx;
        return mx;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */