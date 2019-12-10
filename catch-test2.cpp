#define CATCH_CONFIG_MAIN  
#define CATCH_CONFIG_FAST_COMPILE
#define CATCH_CONFIG_DISABLE_MATCHERS
#include "catch.hpp"

TEST_CASE( "Two and Two is Four", "[2+2=4]" ) {
    REQUIRE( 2+2 == 5 );
}
