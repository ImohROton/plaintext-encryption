#pragma once

#include <iostream>
#include <string>

using namespace std;

string shiftCypher(string line) {
    for (int i = 0; i < line.length(); i++) {
        line[i] += 1;
    }
    
    return line;
}