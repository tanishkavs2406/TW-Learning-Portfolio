/**
 * @file calculator.cpp
 * @brief Small example showing Doxygen documentation comments.
 * @author TW Learning Portfolio
 */

/**
 * @brief Adds two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of a and b.
 */
int add(int a, int b) {
    return a + b;
}

/**
 * @brief Multiplies two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Product of a and b.
 */
int multiply(int a, int b) {
    return a * b;
}

/**
 * @brief Program entry point.
 * @return 0 when the program completes successfully.
 */
int main() {
    int total = add(10, 20);
    int product = multiply(4, 5);
    (void)total;
    (void)product;
    return 0;
}
