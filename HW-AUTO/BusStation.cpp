#include "BusStation.h"

#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

class BusStation {
private:
    map<string, vector<string>> busesToStops;
    map<string, vector<string>> stopsToBuses;

public:

    void AddBus(const string &bus, const vector<string> &stops) {
        busesToStops[bus] = stops;
        for (const string &stop: stops) {
            stopsToBuses[stop].push_back(bus);
        }
    }

    vector<string> GetBusesForStop(const string &stop) const {
        if (stopsToBuses.count(stop) == 0) {
            return {};
        } else
            return stopsToBuses.at(stop);
    }

    vector<pair<string, vector<string>>> GetStopsForBus(const string &bus) const {
        vector<pair<string, vector<string>>> result;
        if (busesToStops.count(bus) == 0) {
            return result;
        } else {
            for (const string &stop: busesToStops.at(bus)) {
                vector<string> buses;
                for (const string &otherBus: stopsToBuses.at(stop)) {
                    if (otherBus != bus)
                        buses.push_back(otherBus);
                }
                result.push_back(make_pair(stop, buses));
            }
            return result;
        }
    }

    map<string, vector<string>> GetAllBuses() const {
        return busesToStops;
    }

};



