#include "../src/factorizer.h"

#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/factorizer.h"
#include <vector>

TEST_CASE( "Factorizer members return accurately" ) {
    factorizer test;
    REQUIRE( test.primeFactors(100) == std::vector<int>{2,2,5,5} );
    REQUIRE( test.primeFactors(35) == std::vector<int>{5,7} );
    REQUIRE( test.primeFactors(24) == std::vector<int>{2,2,2,3} );
    REQUIRE( test.primeFactors(17) == std::vector<int>{17} );
    REQUIRE( test.primeFactors(1).empty() );
    REQUIRE( test.primeFactors(0).empty() );

    REQUIRE( !test.isPrime(1));
    REQUIRE( !test.isPrime(0));
    REQUIRE( test.isPrime(2));
    REQUIRE( test.isPrime(3));
    REQUIRE( !test.isPrime(4));

    REQUIRE( !test.isComposite(1));
    REQUIRE( !test.isComposite(5));
    REQUIRE( test.isComposite(4));
    REQUIRE( test.isComposite(12));
}