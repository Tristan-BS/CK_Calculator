#pragma once

using namespace std;


#ifndef CALCULATORFUNCTION_H
#define CALCULATORFUNCTION_H

#include <string>
// What is this? -> This is a forward declaration, it tells the compiler that class CK_Calculator exists, but it doesn't need to know the details of the class.
double Calculate(const string& expr);

#endif