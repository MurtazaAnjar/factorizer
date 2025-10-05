#include "../src/factorizer.h"

#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/factorizer.h"
#include <vector>

TEST_CASE( "Factorizer returns accurate prime factors" ) {
    REQUIRE( factorizer(100) == std::vector<int>{2,2,5,5} );
    REQUIRE( factorizer(35) == std::vector<int>{5,7} );
    REQUIRE( factorizer(24) == std::vector<int>{2,2,2,3} );
    REQUIRE( factorizer(17) == std::vector<int>{17} );
    REQUIRE( factorizer(1).empty() );
    REQUIRE( factorizer(0).empty() );
}
