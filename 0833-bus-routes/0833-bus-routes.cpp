class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        if(source == target){
            return 0;
        }
        int maxstop = -1;
        for(const auto& route : routes) {
            for(int stop : route){
                maxstop = max(maxstop, stop);
            }
        }
        if(maxstop < target) {
            return -1;
        }
        int n = routes.size();
        vector<int> minbusestoreach(maxstop + 1, INT_MAX);
        minbusestoreach[source] = 0;
        
        bool flag = true;
        while(flag){
            flag = false;
            for(const auto& route : routes) {
                int min = n+1;
                for(int stop : route){
                    min = std::min(min, minbusestoreach[stop]);
                }
                min++;
                for(int stop : route){
                    if(minbusestoreach[stop] > min) {
                        minbusestoreach[stop] = min;
                        flag = true;
                    }
                }
            }
        }
        return (minbusestoreach[target] < n+1) ? minbusestoreach[target] : -1;
    }
};