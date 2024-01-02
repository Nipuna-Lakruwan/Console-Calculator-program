#include <iostream>
using namespace std;

int main()
{
  // Declare variables to store operator and numbers
  char op;
  double num1;
  double num2;
  double result;

  // Display the title of the calculator
  std::cout << "\n***************** CALCULATOR ******************\n";

  // Prompt user to enter the operator (+ - * /)
  std::cout << "Enter either (+ - * /): ";
  std::cin >> op;

  // Prompt user to enter the first number
  std::cout << "Enter #1: ";
  std::cin >> num1;

  // Prompt user to enter the second number
  std::cout << "Enter #2: ";
  std::cin >> num2;

  // Use a switch statement to perform the calculation based on the operator
  switch (op)
  {
  case '+':
    result = num1 + num2;
    std::cout << "Result: " << result << endl;
    break;
  case '-':
    result = num1 - num2;
    std::cout << "Result: " << result << endl;
    break;
  case '*':
    result = num1 * num2;
    std::cout << "Result: " << result << endl;
    break;
  case '/':
    // Check if the second number is not zero before performing division
    if (num2 != 0)
    {
      result = num1 / num2;
      std::cout << "Result: " << result << endl;
    }
    else
    {
      std::cout << "Cannot divide by zero\n";
    }
    break;
  default:
    // Display an error message for an invalid operator
    std::cout << "That wasn't a valid response\n";
    break;
  }

  // Display the end of the calculator section
  std::cout << "***************************************************\n";

  // Return 0 to indicate successful execution
  return 0;
}
