#include <iostream>
#include <string>

using namespace std;

struct BinNode {
    string binID, type;
    BinNode *next;

    BinNode(string id, string t) {
        binID = id;
        type = t;
        next = NULL;
    }
};

class BinList {
public:
    BinNode *head = NULL;

    void addBin(string id, string type) {
        BinNode *newBin = new BinNode(id, type);
        newBin->next = head;
        head = newBin;
    }

    void display() {
        cout << "\nBins:\n";
        BinNode *temp = head;
        while (temp) {
            cout << "Bin ID: " << temp->binID
                 << " | Type: " << temp->type << endl;
            temp = temp->next;
        }
    }
};
