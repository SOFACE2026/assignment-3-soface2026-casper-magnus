#include <sstream> // Hint to how you should build the message.

#include "int_calculator.hpp"

// Constructor Injection
IntCalculator::IntCalculator(Logger *logger) : logger(logger) {}

// Implement this:
int IntCalculator::sum(int a, int b)
{
    // beregner a + b
    int result = a + b;

    // opretter en string stream
    std::stringstream ss;
    // formaterer teksten så den matcher den i testen og opgaven
    ss << "taking the sum of: '" << a << "' and '" << b << "' which is '" << result << "'";

    // konverterer indholdet af streamen til en string og logger den
    logger->log(ss.str());
    // returnerer result
    return result;
}

// Implement this:
int IntCalculator::multiply(int a, int b)
{
    // beregner a * b
    int result = a * b;

    // opretter en string stream
    std::stringstream ss;
    // formaterer teksten så den matcher den i testen og opgaven
    ss << "taking the product of: '" << a << "' and '" << b << "' which is '" << result << "'";

    // konverterer indholdet af streamen til en string og logger den
    logger->log(ss.str());
    // returnerer result
    return result;
}