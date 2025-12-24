#include <iostream>
#include <stack>
#include <string>

using namespace std;

class UndoStack {
public:
    stack<string> s;

    void saveAction(string act) {
        s.push(act);
    }

    void undo() {
        if (s.empty())
            cout << "Nothing to Undo\n";
        else {
            cout << "Undo Pickup: " << s.top() << endl;
            s.pop();
        }
    }
};
