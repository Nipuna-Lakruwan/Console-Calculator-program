# Console-Calculator-program
The provided C++ code implements a simple calculator that performs basic arithmetic operations (+, -, *, /) based on user input.

1. Variable Declarations:
   - `char op`: Holds the arithmetic operator (+, -, *, /) entered by the user.
   - `double num1`: Holds the first operand entered by the user.
   - `double num2`: Holds the second operand entered by the user.
   - `double result`: Stores the result of the arithmetic operation.

2. User Interaction:
   - Prompts the user to enter the operator (+, -, *, /) and stores it in the variable `op`.
   - Prompts the user to enter the first and second numbers (`num1` and `num2`).

3. Arithmetic Calculation (`switch` statement):
   - Uses a `switch` statement to perform the appropriate arithmetic operation based on the entered operator.
   - If the operator is valid (+, -, *, /), it calculates the result and displays it.
   - For division (`/`), it checks if the second number is not zero before performing the division to avoid division by zero errors.
   - If the entered operator is not valid, it displays an error message.

4. Output:
   - Displays the result of the calculation or an error message if the input is invalid or if division by zero is attempted.

5. End of Calculator Section:
   - Outputs a message indicating the end of the calculator section.

6. Return Statement:
   - Returns 0 to indicate successful execution.

Overall, the code provides a simple and interactive way for users to perform basic arithmetic calculations. It includes error handling for cases such as invalid operators and division by zero.
