#include <iostream>

int swap1(int a, int b) {
    int temp = a;
	a = b;
	b = temp;
	return a, b;
}

int swap2(int *a, int *b) {
    int temp = *a;
	*a = *b;
	*b = temp;
	return *a, *b;
}


int main()
{
    // Declare an integer variable named 'num' and initialize it to 10.
    int num = 10;

    // Declare a pointer to an integer named 'numPointer' but don't initialize it yet.
    int* numPointer;

    /* Set the pointer 'numPointer' to the address of the 'num' variable.
       The '&' operator fetches the memory address of 'num'. */
    numPointer = &num;
    std::cout << "Num is " << num << "\n";
    std::cout << "The address of Num is " << numPointer << "\n";
    std::cout << "The memory location for num is " << &num;
    std::cout << "The information stored at address " << numPointer << " is " << *numPointer << "\n";



    std::cout << "\n\n\n";



    int numbers[5];
    for (int i = 0; i < 4; i++) {
        numbers[i] = i + 1;
        std::cout << "The values in the array are " << numbers[i] << "\n";
    }

    std::cout << "The memory location of the first item is " << &numbers[0];

    for (int i = 0; i < 4; i++) {
        std::cout << "The memory locations in the array are " << &numbers[i] << "\n";
    }


    std::cout << "\n\n\n";


    bool value = true;
    bool otherValue = false;

    std::cout << "The memory location of the first item is " << &value << "\n";
    std::cout << "The memory location of the first item is " << &otherValue << "\n";
        


    std::cout << "\n\n\n";


    bool boolArray[10];
    for (int i = 0; i < 10; i++) {
		boolArray[i] = rand() % 2;
	}
    for (int i = 0; i < 10; i++) {
		std::cout << "The memory locations in the array are " << &boolArray[i] << "\n";
	}   

    // Swap Integer
    int a = 10;
    int b = 20;
    std::cout << "A = " << a << " B = " << b << "\n";
    int temp = a;
    a = b;
    b = temp;
    std::cout << "A = " << a << " B = " << b << "\n";

    // Swap Integer with function
    int c = 10;
    int d = 20;
    std::cout << "C = " << c << " D = " << d << "\n";
    swap1(c, d);
    std::cout << "C = " << c << " D = " << d << "\n";

    // Swap Integer with pointer
    int e = 10;
    int f = 20;
    std::cout << "E = " << e << " F = " << f << "\n";
    swap2(&e, &f);
    std::cout << "E = " << e << " F = " << f << "\n";



    std::cout << "\n\n\n";


    // char characters[5] = {'a', 'b', 'c', 'd', 'e'};
    // std::cout << "The size of the array is" << sizeof(characters) / sizeof(characters[0]) << " bytes";
    
    // &characters[0]




}


