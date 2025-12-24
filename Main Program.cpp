#include <iostream>
#include <string>

using namespace std;

#include "Zone Graph.cpp"
#include "Request Queue.cpp"
#include "Undo Pickup.cpp"
#include "Waste Type Tree.cpp"
#include "Bin Linked List.cpp"
#include "Hash Table for Tracking.cpp"

int main() {

    // Graph
    ZoneGraph zg;
    zg.addRoute("Zone A", "Zone B", 5);
    zg.addRoute("Zone B", "Zone C", 3);
    zg.display();

    // Queue
    RequestQueue rq;
    rq.addRequest("Pickup Zone A");
    rq.addRequest("Pickup Zone B");

    // Stack
    UndoStack us;

    // Tree
    cout << "\nWaste Classification Tree:\n";
    WasteTree wt;
    wt.display(wt.root);

    // Linked List
    BinList bl;
    bl.addBin("B101", "Wet");
    bl.addBin("B102", "Dry");
    bl.display();

    // Hash Table
    BinTracker bt;
    bt.update("B101", "Full");
    bt.update("B102", "Half");
    bt.display();

    // Process request
    cout << "\nProcessing Request:\n";
    string processed = rq.processRequest();
    cout << processed << endl;
    us.saveAction(processed);

    // Undo
    cout << "\nUndo Operation:\n";
    us.undo();

    return 0;
}
