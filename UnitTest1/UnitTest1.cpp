#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab 13.1\var.cpp"
#include "..\lab 13.1\dod.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsDod;
using namespace nsVar;


namespace UnitTestlab131
{
    TEST_CLASS(UnitTestlab131)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            a = 3;
            x = 2;
            n = 1;
            dod();
            Assert::AreEqual(a, 0.);
        }
    };
}
