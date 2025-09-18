#include <fstream>
#include <iostream>
#include <list>
#include <string>

#include "algorithms.hpp"

using namespace std;

/* Reads .txt in the "in" folder and outputs the encrypted text based on a
   chosen algorithm. */
int main() {
    list<string> lines;
    ifstream plaintext("in/plaintext.txt");
    
    if (plaintext.is_open()) {
        string l;
        while (getline(plaintext, l)) {
            lines.push_back(l);
        }
        plaintext.close();
    } else {
        cout << "File cannot be opened." << endl;
    }

    cout << "Plaintext:" << endl;
    for (string l : lines) {
        cout << l << endl;
    }

    cout << endl << "Cipher: " << endl;
    for (string l : lines) {
        cout << shiftCypher(l) << endl;
    }

    return 0;
}
