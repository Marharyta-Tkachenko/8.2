#include "pch.h"
#include "CppUnitTest.h"
#include "../Project8.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = "asf    dsa";
			ReplaceSpaces(str);
			Assert::AreEqual(str, "asf dsa");
		}
	};
}
