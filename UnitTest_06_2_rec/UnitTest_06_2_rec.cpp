#include "pch.h"
#include "CppUnitTest.h"
#include "../pr_06_2_rec/pr_06_2_rec.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestArray
{
	TEST_CLASS(UnitTestArray)
	{
	public:

		TEST_METHOD(TestCreate)
		{
			const int size = 5;
			int a[size];
			int min = -10;
			int max = 10;

			Create(a, size, min, max, 0);

			for (int i = 0; i < size; i++)
			{
				Assert::IsTrue(a[i] >= min && a[i] <= max, L"Element out of range");
			}
		}

		TEST_METHOD(TestReverse)
		{
			const int size = 5;
			int a[size] = { 1, 2, 3, 4, 5 };

			Reverse(a, size, 0);

			int expected[size] = { 5, 4, 3, 2, 1 };
			Assert::IsTrue(memcmp(a, expected, sizeof(a)) == 0, L"Array not reversed correctly");
		}
	};
}
