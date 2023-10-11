#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"
#include<time.h>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test roll_die range", "Should return a number between 1 and 6")
{
	srand(time(NULL));
	for(int i = 0; i < 10; i++)
	{
		REQUIRE((roll_die() >= 1 && roll_die() <= 6));
	}
}
