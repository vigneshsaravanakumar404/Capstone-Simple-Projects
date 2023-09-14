#include <iostream>
#include <vector>
#include "new.h"

using namespace std;


std::vector<char> charVector(vector<char> charVec) {

    // Convert all the lowercase letters to uppercase letters
    for (int x = 0; x < charVec.size(); x++) {
        if (charVec[x] >= 97 && charVec[x] <= 122) {
            charVec[x] = charVec[x] - 32;
        }
    }
    return charVec;
}
