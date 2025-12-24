#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;

class ZoneGraph {
public:
    map<string, vector<pair<string, int>>> graph;

    void addRoute(string z1, string z2, int dist) {
        graph[z1].push_back({z2, dist});
        graph[z2].push_back({z1, dist});
    }

    void display() {
        cout << "\nZone Graph:\n";
        for (auto &z : graph) {
            cout << z.first << " -> ";
            for (auto &nbr : z.second)
                cout << "(" << nbr.first << "," << nbr.second << "km) ";
            cout << endl;
        }
    }
};
