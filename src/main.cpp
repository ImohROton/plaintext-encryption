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

    remove("out/cipher.txt");

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

    ofstream cipher1("out/cipher.txt");

    for (string l : lines) {
        cipher1 << shiftCypher(l) << endl;
    }
    cipher1.close();

    ifstream cipher2("out/cipher.txt");

    if (cipher2.is_open()) {
        

        lines.clear();
        string l;
        while (getline(cipher2, l)) {
            lines.push_back(l);
        }
        cipher2.close();
    }

    cout << endl << "Cipher: " << endl;
    for (string l : lines) {
        cout << l << endl;
    }

    return 0;
}
