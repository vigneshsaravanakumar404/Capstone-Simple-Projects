#include <cmath>
#include <string>
#include "Header.h"

using namespace std;

string hexToBin(string input) {

    int output = 0;
    int length = input.length();

    for (int i = 0; i < length; ++i) {

        // Read characters in reverse order
        char c = input[length - 1 - i];
        int value;

        // Convert each Chart to decimal
        if (c >= '0' && c <= '9') {
            value = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            value = c - 'A' + 10;
        }
		else if (c >= 'a' && c <= 'f') {
			value = c - 'a' + 10;
		}
        else {
            return "Bad input - (prolly tejas)";
        }

        // Add (value * i^(16) to the output
        output += value * pow(16, i);
    }

    return decToBin(output);
}



string decToBin(int input) {

    // Find the maximum power of 2 that is less than or equal to the input
    int power = 0;
    while (pow(2, power) <= input) {
        power++;
    }
    power--; 

    // Keep subtracting powers of 2 from the input and adding 1 to the output string
    string output = "";
    for (int i = power; i >= 0; i--) {

        /* 
            If the power of 2 is less than or equal to the input, 
            subtract it from the input and add a 1 to the output 
        */
        if (pow(2, i) <= input) {
            output += "1";
            input -= pow(2, i);
        }
        /*
            If the power of 2 is greater than the input, add a 0 to the output. 
            Because the powers of 2 are in descending order. 
        */
        else {
            output += "0";
        }
    }

    return output;
}
