#include "BusStation.cpp"

using namespace std;

void getRequests() {
    int numberOfRequests;
    BusStation busStation;
    cin >> numberOfRequests;
    for (int i = 0; i < numberOfRequests; i++) {
        string command;
        cin >> command;
        if (command == "NEW_BUS") {
            string bus;
            int stopCount;
            cin >> bus >> stopCount;
            vector<string> stops(stopCount);
            for (string& stop : stops) {
                cin >> stop;
            }
            busStation.AddBus(bus, stops);
        }
        else if (command == "BUSES_FOR_STOP") {
            string stop;
            cin >> stop;
            const vector<string>& buses = busStation.GetBusesForStop(stop);
            if (buses.empty())
                cout << "No stop" << endl;
            else {
                for (const string& bus : buses)
                    cout << bus << " ";
                cout << endl;
            }
        }
        else if (command == "STOPS_FOR_BUS") {
            string bus;
            cin >> bus;
            const vector<pair<string, vector<string>>>& stops = busStation.GetStopsForBus(bus);
            if (stops.empty())
                cout << "No bus" << endl;
            else {
                for (const pair<string, vector<string>>& stop : stops) {
                    cout << "Stop " << stop.first << ":";
                    if (stop.second.empty())
                        cout << " no interchange";
                    else {
                        for (const string& otherBus : stop.second)
                            cout << " " << otherBus;
                    }
                    cout << endl;
                }
            }
        } else if (command == "ALL_BUSES") {
            const map<string, vector<string>>& buses = busStation.GetAllBuses();
            if (buses.empty())
                cout << "No buses" << endl;
            else {
                for (const pair<const string, vector<string>>& busItem : buses) {
                    cout << "Bus " << busItem.first << ": ";
                    for (const string& stop : busItem.second)
                        cout << stop << " ";
                    cout << endl;
                }
            }
        }
    }
}

int main() {
    getRequests();
    return 0;
}