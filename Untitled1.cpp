#include <iostream>

int main() {
    double num1, num2;
    char operation;

    std::cout << "Simple Calculator" << std::endl;
    
    // Input the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    
    // Input the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    
    // Input the operation
    std::cout << "Choose an operation (+, -, *, /): ";
    std::cin >> operation;

    // Perform the chosen operation
    double result;
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
                return 1; // Exit with an error code
            }
            break;
        default:
            std::cout << "Invalid operation." << std::endl;
            return 1; // Exit with an error code
    }

    // Display the result
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}
