#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test value function")
{
	int value = 10;

	value = value_copy_func(value);
	REQUIRE(value == 20);

	value = value_copy_func(value);
	REQUIRE(value == 30);
}

TEST_CASE("Test reference function")
{
	int value = 10;

	reference_func(value);
	REQUIRE(value == 20);

	reference_func(value);
	REQUIRE(value == 30);
}
