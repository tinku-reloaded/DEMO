#include <iostream>

int doubleResult(int value);
// Function type definition
typedef int (*FunctionPtr)(int);


// Function that takes a function pointer as a parameter and returns a function pointer
FunctionPtr functionManipulator(FunctionPtr func) {
    // Define a new function that doubles the result of the input function
int doubleResult(int value) 
    {
        int result = func(value);
        return result * 2;
    }

    // Return the function pointer to the new function
return doubleResult;
}

// Example function
int square(int value) {
    return value * value;
}

int main() {
    // Pass the 'square' function as a parameter and get the manipulated function
    FunctionPtr manipulatedFunc = functionManipulator(square);

    // Use the manipulated function
    int result = manipulatedFunc(5);
    std::cout << "Manipulated result: " << result << std::endl;

    return 0;
}