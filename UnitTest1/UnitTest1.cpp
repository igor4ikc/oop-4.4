#include "pch.h"
#include "CppUnitTest.h"
#include "../4.4/Ball.h"
#include "../4.4/Ball.cpp"
#include "../4.4/Body.h"
#include "../4.4/Body.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Ball a(0);
			Assert::AreEqual(a.Plos(), 0.0);
		}
	};
}
