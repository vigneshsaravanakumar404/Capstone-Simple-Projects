#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

int main()
{
    // Variables
    string input;
    string hexOrDec;
    string output = "";
    bool exit = true;

    
    while (exit) {
        // Get input
        cout << "\n\nPlease specify the number system of the input number.\n";
        cout << "\t1) Base 10 (Decimal)\n";
        cout << "\t2) Base 16 (Hexadecimal)\n";
        cout << "\tType QUIT to exit\n";

        std::cin >> hexOrDec;

        if (hexOrDec == "QUIT") {
            exit = false;
            continue;
        }

        cout << "Please enter the number:";
        cin >> input;
        input.erase(remove(input.begin(), input.end(), ' '), input.end());

        if (hexOrDec == "1") {
            hexOrDec = "decimal";
            output = decToBin(stoi(input));
        }
        else if (hexOrDec == "2") {
            hexOrDec = "hexadecimal";
            output = hexToBin(input);
        }
		else {
			cout << "Invalid input\n";
			continue;
		}
        // if output % 4 != 0, add 0s to the front
        while (output.length() % 4 != 0) {
            output = "0" + output;
        }

        // Group the output into 4-bit chunks
        string groupedOutput = "";
        int length = output.length();
        for (int i = 0; i < length; i++) {
			groupedOutput += output[i];
            if ((i + 1) % 4 == 0) {
				groupedOutput += " ";
			}
		}
        // Output
        cout << "The number you entered is " << input << " in " << hexOrDec << " and is " << groupedOutput << " in binary\n";

    }
  
    
}