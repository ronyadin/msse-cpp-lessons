#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions.hpp"

TEST_CASE("Temperature FUnctions", "[temperature]")
{
    REQUIRE(convert_ftoc(-40.0) == -40.0);
}