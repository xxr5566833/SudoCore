#include "stdafx.h"
#include "CppUnitTest.h"
#include "../SoduCore/puzzle_generator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestSoduCore
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Test_generate_m)
		{
            // TODO
            int result[3][81];
            generate(3, 2, result);
		}

        TEST_METHOD(Test_generate_r)
        {
            // TODO
        }

        TEST_METHOD(Test_solve_s)
        {
            // TODO
        }

        TEST_METHOD(Test_dlxFind)
        {
            // TODO
        }
	};
}