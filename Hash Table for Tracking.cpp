#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class BinTracker {
public:
    unordered_map<string, string> status;

    void update(string binID, string state) {
        status[binID] = state;
    }

    void display() {
        cout << "\nBin Status:\n";
        for (auto &b : status)
            cout << b.first << " -> " << b.second << endl;
    }
};
