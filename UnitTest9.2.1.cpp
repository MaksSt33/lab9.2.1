#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "CppUnitTest.h"
#include "../lab9.2.1/lab9.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1 {
	TEST_CLASS(UnitTest1) {
public:
	TEST_METHOD(TestCalculateWFormula1) {
		// Тест для calculateWFormula1 (формула для z = 1)  
		double x = 3.0, y = 2.0;
		double expected = MIN(SQUARE(x - y), ABS(y - x));  
		Assert::AreEqual(expected, calculateWFormula1(x, y), 0.001);
	}

	TEST_METHOD(TestCalculateWFormula2) {
		// Тест для calculateWFormula2 (формула для z != 1)
		double x = 2.0, y = 3.0, z = 4.0;
		double expected = MAX(x + SQUARE(y), z + SQUARE(x));  
		Assert::AreEqual(expected, calculateWFormula2(x, y, z), 0.001);
	}


	};
}
