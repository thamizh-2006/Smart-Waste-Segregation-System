#include <iostream>
#include <queue>
#include <string>

using namespace std;

class RequestQueue {
public:
    queue<string> q;

    void addRequest(string r) {
        q.push(r);
        cout << "Request Added: " << r << endl;
    }

    string processRequest() {
        if (q.empty()) return "No Requests";
        string r = q.front();
        q.pop();
        return r;
    }
};
