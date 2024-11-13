#include "CalculatorFunction.h"
#include <stdexcept>
#include <cctype>
#include <cmath>

using namespace std;

double ParseExpression(const string& expr, size_t& pos);
double ParseTerm(const string& expr, size_t& pos);
double ParseNumber(const string& expr, size_t& pos);

double Calculate(const string& expr) {
    size_t pos = 0;
    return ParseExpression(expr, pos);
}

double ParseNumber(const string& expr, size_t& pos) {
    double number = 0;
    double factor = 1;
    bool decimalPointEncountered = false;

    while (pos < expr.size() && (isdigit(expr[pos]) || expr[pos] == '.')) {
        if (expr[pos] == '.') {
            decimalPointEncountered = true;
            pos++;
            continue;
        }

        if (decimalPointEncountered) {
            factor /= 10;
            number += (expr[pos] - '0') * factor;
        }
        else {
            number = number * 10 + (expr[pos] - '0');
        }
        pos++;
    }
    return number;
}


double ParseTerm(const string& expr, size_t& pos) {
    double result = ParseNumber(expr, pos);
    while (pos < expr.size()) {
        if (expr[pos] == '*') {
            pos++;
            result *= ParseNumber(expr, pos);
        }
        else if (expr[pos] == '/') {
            pos++;
            double divisor = ParseNumber(expr, pos);
            if (divisor == 0) throw runtime_error("Division by zero.");
            result /= divisor;
        }
        else {
            break;
        }
    }
    return result;
}

double ParseExpression(const string& expr, size_t& pos) {
    double result = ParseTerm(expr, pos);
    while (pos < expr.size()) {
        if (expr[pos] == '+') {
            pos++;
            result += ParseTerm(expr, pos);
        }
        else if (expr[pos] == '-') {
            pos++;
            result -= ParseTerm(expr, pos);
        }
        else {
            break;
        }
    }
    return result;
}