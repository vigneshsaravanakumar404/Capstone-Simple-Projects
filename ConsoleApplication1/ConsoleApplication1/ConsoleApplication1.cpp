#include <iostream>
#include "new.cpp"
using namespace std;


void method1(int number) {
    for (int x = 0; x < number; x++) {
        if (x % 2 == 0) {
            cout << x << std::endl;
        }
    }

}

char* method2(string s) {
    // return the array as a char array
    char* array = new char[s.size()];
    for (int x = 0; x < s.size(); x++) {
        array[x] = s[x];
    }
    return array;
}

bool** method3(bool** array, bool flip) {
    // if true then flip all the values
    if (flip) {
        for (int x = 0; x < 3; x++) {
            for (int y = 0; y < 3; y++) {
                array[x][y] = !array[x][y];
            }
        }
        return array;
    }
    else {
        return array;
    }

}



int main() {



    // Method 1
    method1(10);

    // Method 2
    cout << "\n";
    cout << "\n";
    method2("Hello World");
    for (int x = 0; x < 11; x++) {
        cout << method2("Hello World")[x] << std::endl;
    }

    // Method 3
    bool** array = new bool* [3];
    for (int x = 0; x < 3; x++) {
        array[x] = new bool[3];
        for (int y = 0; y < 3; y++) {
            array[x][y] = true;
        }
    }

    cout << "\n";
    cout << "\n";

    method3(array, false);
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            cout << array[x][y] << " ";
        }
        cout << std::endl;
    }

    cout << "\n";

    method3(array, true);
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            cout << array[x][y] << " ";
        }
        cout << std::endl;
    }


    // Part 2
    cout << "\n";
    cout << "\n";
    std::vector<char> charVec = {'H', 'e', 'l', 'l', 'o'};
    charVector(charVec);  


    return 0;
}