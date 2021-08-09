#include "pch.h"
#include "CppUnitTest.h"
#include "../Project_1/Project_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int stepin = 0;
			stepin = Gleich1();

			Assert::AreEqual(stepin, 9);
		}
	};
}
