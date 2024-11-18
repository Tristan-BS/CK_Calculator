#include "CppUnitTest.h"
#include "CalculatorFunction.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CK_CalculatorTests
{
    TEST_CLASS(CK_CalculatorTests)
    {
    public:

        TEST_METHOD(TestAddition)
        {
            double result = Calculate("2+2");
            Assert::AreEqual(4.0, result);
        }

        TEST_METHOD(TestSubtraction)
        {
            double result = Calculate("5-3");
            Assert::AreEqual(2.0, result);
        }

        TEST_METHOD(TestMultiplication)
        {
            double result = Calculate("3*3");
            Assert::AreEqual(9.0, result);
        }

        TEST_METHOD(TestDivision)
        {
            double result = Calculate("10/2");
            Assert::AreEqual(5.0, result);
        }

        TEST_METHOD(TestDivisionByZero)
        {
            try
            {
                double result = Calculate("10/0");
                Assert::Fail(L"No exception thrown");
            }
            catch (const std::runtime_error& e)
            {
                Assert::AreEqual(std::string("Division by zero."), std::string(e.what()));
            }
        }

        TEST_METHOD(TestComplexExpression)
        {
            double result = Calculate("2+3*4-5/5");
            Assert::AreEqual(13.0, result);
        }
    };
}