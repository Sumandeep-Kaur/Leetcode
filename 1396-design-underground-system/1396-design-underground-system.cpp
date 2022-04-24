class UndergroundSystem {
public:
    unordered_map<int, pair<string, int>> checkInMap;
    unordered_map<string, pair<int, int>> checkOutMap;
    
    UndergroundSystem() {}
    
    void checkIn(int id, string stationName, int t) {
        checkInMap[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto checkin = checkInMap[id];
        string route = checkin.first + "-" + stationName;
        checkOutMap[route].first += t - checkin.second;
        checkOutMap[route].second += 1;
    }
    
    double getAverageTime(string startStation, string endStation) {
        string route = startStation + "-" + endStation;
        auto checkout = checkOutMap[route];
        return (double) checkout.first / checkout.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */