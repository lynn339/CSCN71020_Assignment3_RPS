#include "pch.h"
#include "CppUnitTest.h"
extern "C" {
#include "../RPS_function/RPS_function.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPStest
{
	TEST_CLASS(RPStest)
	{
	public:
		
		TEST_METHOD(TestDraw)
		{
			Assert::AreEqual("Draw", determineWinner("Rock", "Rock"));
		}
		TEST_METHOD(TestPlayer1Wins)
		{
			Assert::AreEqual("Player1", determineWinner("Rock", "Scissors"));
		}
		
	};
}
