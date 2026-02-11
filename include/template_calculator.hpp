#pragma once

#include <sstream>
#include "logger.hpp"

template <typename T>
class TemplateCalculator
{
public:
    explicit TemplateCalculator(Logger *logger) : logger(logger)
    {
    }

    // Implement this:
    T sum(T a, T b)
    {
        // beregner a + b
    T result = a + b;

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
    T multiply(T a, T b)
    {
         // beregner a * b
    T result = a * b;

    // opretter en string stream
    std::stringstream ss;
    // formaterer teksten så den matcher den i testen og opgaven
    ss << "taking the product of: '" << a << "' and '" << b << "' which is '" << result << "'";

    // konverterer indholdet af streamen til en string og logger den
    logger->log(ss.str());
    // returnerer result
    return result;
    }

private:
    Logger *logger;
};