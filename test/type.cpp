#define BOOST_TEST_MODULE type

#include <string_view>
#include <memory>
#include <string>

#include <boost/test/unit_test.hpp>

#include "type.hpp"

BOOST_AUTO_TEST_CASE(boolean)
{
    BOOST_CHECK_EQUAL(metainformation::type<bool>::name(),         "bool");
    BOOST_CHECK_EQUAL(metainformation::type<bool&>::name(),        "bool&");
    BOOST_CHECK_EQUAL(metainformation::type<bool&&>::name(),       "bool&&");
    BOOST_CHECK_EQUAL(metainformation::type<bool*>::name(),        "bool*");
    BOOST_CHECK_EQUAL(metainformation::type<bool**>::name(),       "bool**");
    BOOST_CHECK_EQUAL(metainformation::type<const bool>::name(),   "const bool");
    BOOST_CHECK_EQUAL(metainformation::type<const bool&>::name(),  "const bool&");
    BOOST_CHECK_EQUAL(metainformation::type<const bool&&>::name(), "const bool&&");
    BOOST_CHECK_EQUAL(metainformation::type<const bool*>::name(),  "const bool*");
    BOOST_CHECK_EQUAL(metainformation::type<const bool**>::name(), "const bool**");
}

BOOST_AUTO_TEST_CASE(character)
{
    BOOST_CHECK_EQUAL(metainformation::type<char>::name(),         "char");
    BOOST_CHECK_EQUAL(metainformation::type<char&>::name(),        "char&");
    BOOST_CHECK_EQUAL(metainformation::type<char&&>::name(),       "char&&");
    BOOST_CHECK_EQUAL(metainformation::type<char*>::name(),        "char*");
    BOOST_CHECK_EQUAL(metainformation::type<char**>::name(),       "char**");
    BOOST_CHECK_EQUAL(metainformation::type<const char>::name(),   "const char");
    BOOST_CHECK_EQUAL(metainformation::type<const char&>::name(),  "const char&");
    BOOST_CHECK_EQUAL(metainformation::type<const char&&>::name(), "const char&&");
    BOOST_CHECK_EQUAL(metainformation::type<const char*>::name(),  "const char*");
    BOOST_CHECK_EQUAL(metainformation::type<const char**>::name(), "const char**");
}

BOOST_AUTO_TEST_SUITE(integer);

BOOST_AUTO_TEST_CASE(si)
{
    BOOST_CHECK_EQUAL(metainformation::type<short int>::name(),         "short int");
    BOOST_CHECK_EQUAL(metainformation::type<short int&>::name(),        "short int&");
    BOOST_CHECK_EQUAL(metainformation::type<short int&&>::name(),       "short int&&");
    BOOST_CHECK_EQUAL(metainformation::type<short int*>::name(),        "short int*");
    BOOST_CHECK_EQUAL(metainformation::type<short int**>::name(),       "short int**");
    BOOST_CHECK_EQUAL(metainformation::type<const short int>::name(),   "const short int");
    BOOST_CHECK_EQUAL(metainformation::type<const short int&>::name(),  "const short int&");
    BOOST_CHECK_EQUAL(metainformation::type<const short int&&>::name(), "const short int&&");
    BOOST_CHECK_EQUAL(metainformation::type<const short int*>::name(),  "const short int*");
    BOOST_CHECK_EQUAL(metainformation::type<const short int**>::name(), "const short int**");
}

BOOST_AUTO_TEST_CASE(usi)
{
    BOOST_CHECK_EQUAL(metainformation::type<unsigned short int>::name(),         "unsigned short int");
    BOOST_CHECK_EQUAL(metainformation::type<unsigned short int&>::name(),        "unsigned short int&");
    BOOST_CHECK_EQUAL(metainformation::type<unsigned short int&&>::name(),       "unsigned short int&&");
    BOOST_CHECK_EQUAL(metainformation::type<unsigned short int*>::name(),        "unsigned short int*");
    BOOST_CHECK_EQUAL(metainformation::type<unsigned short int**>::name(),       "unsigned short int**");
    BOOST_CHECK_EQUAL(metainformation::type<const unsigned short int>::name(),   "const unsigned short int");
    BOOST_CHECK_EQUAL(metainformation::type<const unsigned short int&>::name(),  "const unsigned short int&");
    BOOST_CHECK_EQUAL(metainformation::type<const unsigned short int&&>::name(), "const unsigned short int&&");
    BOOST_CHECK_EQUAL(metainformation::type<const unsigned short int*>::name(),  "const unsigned short int*");
    BOOST_CHECK_EQUAL(metainformation::type<const unsigned short int**>::name(), "const unsigned short int**");
}

BOOST_AUTO_TEST_CASE(i)
{
    BOOST_CHECK_EQUAL(metainformation::type<int>::name(),         "int");
    BOOST_CHECK_EQUAL(metainformation::type<int&>::name(),        "int&");
    BOOST_CHECK_EQUAL(metainformation::type<int&&>::name(),       "int&&");
    BOOST_CHECK_EQUAL(metainformation::type<int*>::name(),        "int*");
    BOOST_CHECK_EQUAL(metainformation::type<int**>::name(),       "int**");
    BOOST_CHECK_EQUAL(metainformation::type<const int>::name(),   "const int");
    BOOST_CHECK_EQUAL(metainformation::type<const int&>::name(),  "const int&");
    BOOST_CHECK_EQUAL(metainformation::type<const int&&>::name(), "const int&&");
    BOOST_CHECK_EQUAL(metainformation::type<const int*>::name(),  "const int*");
    BOOST_CHECK_EQUAL(metainformation::type<const int**>::name(), "const int**");
}

BOOST_AUTO_TEST_CASE(ui)
{
    BOOST_CHECK_EQUAL(metainformation::type<unsigned int>::name(),         "unsigned int");
    BOOST_CHECK_EQUAL(metainformation::type<unsigned int&>::name(),        "unsigned int&");
    BOOST_CHECK_EQUAL(metainformation::type<unsigned int&&>::name(),       "unsigned int&&");
    BOOST_CHECK_EQUAL(metainformation::type<unsigned int*>::name(),        "unsigned int*");
    BOOST_CHECK_EQUAL(metainformation::type<unsigned int**>::name(),       "unsigned int**");
    BOOST_CHECK_EQUAL(metainformation::type<const unsigned int>::name(),   "const unsigned int");
    BOOST_CHECK_EQUAL(metainformation::type<const unsigned int&>::name(),  "const unsigned int&");
    BOOST_CHECK_EQUAL(metainformation::type<const unsigned int&&>::name(), "const unsigned int&&");
    BOOST_CHECK_EQUAL(metainformation::type<const unsigned int*>::name(),  "const unsigned int*");
    BOOST_CHECK_EQUAL(metainformation::type<const unsigned int**>::name(), "const unsigned int**");
}

BOOST_AUTO_TEST_CASE(li)
{
    BOOST_CHECK_EQUAL(metainformation::type<long int>::name(),         "long int");
    BOOST_CHECK_EQUAL(metainformation::type<long int&>::name(),        "long int&");
    BOOST_CHECK_EQUAL(metainformation::type<long int&&>::name(),       "long int&&");
    BOOST_CHECK_EQUAL(metainformation::type<long int*>::name(),        "long int*");
    BOOST_CHECK_EQUAL(metainformation::type<long int**>::name(),       "long int**");
    BOOST_CHECK_EQUAL(metainformation::type<const long int>::name(),   "const long int");
    BOOST_CHECK_EQUAL(metainformation::type<const long int&>::name(),  "const long int&");
    BOOST_CHECK_EQUAL(metainformation::type<const long int&&>::name(), "const long int&&");
    BOOST_CHECK_EQUAL(metainformation::type<const long int*>::name(),  "const long int*");
    BOOST_CHECK_EQUAL(metainformation::type<const long int**>::name(), "const long int**");
}

BOOST_AUTO_TEST_CASE(uli)
{
    BOOST_CHECK_EQUAL(metainformation::type<unsigned long int>::name(),         "unsigned long int");
    BOOST_CHECK_EQUAL(metainformation::type<unsigned long int&>::name(),        "unsigned long int&");
    BOOST_CHECK_EQUAL(metainformation::type<unsigned long int&&>::name(),       "unsigned long int&&");
    BOOST_CHECK_EQUAL(metainformation::type<unsigned long int*>::name(),        "unsigned long int*");
    BOOST_CHECK_EQUAL(metainformation::type<unsigned long int**>::name(),       "unsigned long int**");
    BOOST_CHECK_EQUAL(metainformation::type<const unsigned long int>::name(),   "const unsigned long int");
    BOOST_CHECK_EQUAL(metainformation::type<const unsigned long int&>::name(),  "const unsigned long int&");
    BOOST_CHECK_EQUAL(metainformation::type<const unsigned long int&&>::name(), "const unsigned long int&&");
    BOOST_CHECK_EQUAL(metainformation::type<const unsigned long int*>::name(),  "const unsigned long int*");
    BOOST_CHECK_EQUAL(metainformation::type<const unsigned long int**>::name(), "const unsigned long int**");
}

BOOST_AUTO_TEST_CASE(lli)
{
    BOOST_CHECK_EQUAL(metainformation::type<long long int>::name(),         "long long int");
    BOOST_CHECK_EQUAL(metainformation::type<long long int&>::name(),        "long long int&");
    BOOST_CHECK_EQUAL(metainformation::type<long long int&&>::name(),       "long long int&&");
    BOOST_CHECK_EQUAL(metainformation::type<long long int*>::name(),        "long long int*");
    BOOST_CHECK_EQUAL(metainformation::type<long long int**>::name(),       "long long int**");
    BOOST_CHECK_EQUAL(metainformation::type<const long long int>::name(),   "const long long int");
    BOOST_CHECK_EQUAL(metainformation::type<const long long int&>::name(),  "const long long int&");
    BOOST_CHECK_EQUAL(metainformation::type<const long long int&&>::name(), "const long long int&&");
    BOOST_CHECK_EQUAL(metainformation::type<const long long int*>::name(),  "const long long int*");
    BOOST_CHECK_EQUAL(metainformation::type<const long long int**>::name(), "const long long int**");
}

BOOST_AUTO_TEST_CASE(ulli)
{
    BOOST_CHECK_EQUAL(metainformation::type<unsigned long long int>::name(),         "unsigned long long int");
    BOOST_CHECK_EQUAL(metainformation::type<unsigned long long int&>::name(),        "unsigned long long int&");
    BOOST_CHECK_EQUAL(metainformation::type<unsigned long long int&&>::name(),       "unsigned long long int&&");
    BOOST_CHECK_EQUAL(metainformation::type<unsigned long long int*>::name(),        "unsigned long long int*");
    BOOST_CHECK_EQUAL(metainformation::type<unsigned long long int**>::name(),       "unsigned long long int**");
    BOOST_CHECK_EQUAL(metainformation::type<const unsigned long long int>::name(),   "const unsigned long long int");
    BOOST_CHECK_EQUAL(metainformation::type<const unsigned long long int&>::name(),  "const unsigned long long int&");
    BOOST_CHECK_EQUAL(metainformation::type<const unsigned long long int&&>::name(), "const unsigned long long int&&");
    BOOST_CHECK_EQUAL(metainformation::type<const unsigned long long int*>::name(),  "const unsigned long long int*");
    BOOST_CHECK_EQUAL(metainformation::type<const unsigned long long int**>::name(), "const unsigned long long int**");
}

BOOST_AUTO_TEST_SUITE_END(); // integer

BOOST_AUTO_TEST_SUITE(floating_point);

BOOST_AUTO_TEST_CASE(f)
{
    BOOST_CHECK_EQUAL(metainformation::type<float>::name(),         "float");
    BOOST_CHECK_EQUAL(metainformation::type<float&>::name(),        "float&");
    BOOST_CHECK_EQUAL(metainformation::type<float&&>::name(),       "float&&");
    BOOST_CHECK_EQUAL(metainformation::type<float*>::name(),        "float*");
    BOOST_CHECK_EQUAL(metainformation::type<float**>::name(),       "float**");
    BOOST_CHECK_EQUAL(metainformation::type<const float>::name(),   "const float");
    BOOST_CHECK_EQUAL(metainformation::type<const float&>::name(),  "const float&");
    BOOST_CHECK_EQUAL(metainformation::type<const float&&>::name(), "const float&&");
    BOOST_CHECK_EQUAL(metainformation::type<const float*>::name(),  "const float*");
    BOOST_CHECK_EQUAL(metainformation::type<const float**>::name(), "const float**");
}

BOOST_AUTO_TEST_CASE(d)
{
    BOOST_CHECK_EQUAL(metainformation::type<double>::name(),         "double");
    BOOST_CHECK_EQUAL(metainformation::type<double&>::name(),        "double&");
    BOOST_CHECK_EQUAL(metainformation::type<double&&>::name(),       "double&&");
    BOOST_CHECK_EQUAL(metainformation::type<double*>::name(),        "double*");
    BOOST_CHECK_EQUAL(metainformation::type<double**>::name(),       "double**");
    BOOST_CHECK_EQUAL(metainformation::type<const double>::name(),   "const double");
    BOOST_CHECK_EQUAL(metainformation::type<const double&>::name(),  "const double&");
    BOOST_CHECK_EQUAL(metainformation::type<const double&&>::name(), "const double&&");
    BOOST_CHECK_EQUAL(metainformation::type<const double*>::name(),  "const double*");
    BOOST_CHECK_EQUAL(metainformation::type<const double**>::name(), "const double**");
}

BOOST_AUTO_TEST_CASE(ld)
{
    BOOST_CHECK_EQUAL(metainformation::type<long double>::name(),         "long double");
    BOOST_CHECK_EQUAL(metainformation::type<long double&>::name(),        "long double&");
    BOOST_CHECK_EQUAL(metainformation::type<long double&&>::name(),       "long double&&");
    BOOST_CHECK_EQUAL(metainformation::type<long double*>::name(),        "long double*");
    BOOST_CHECK_EQUAL(metainformation::type<long double**>::name(),       "long double**");
    BOOST_CHECK_EQUAL(metainformation::type<const long double>::name(),   "const long double");
    BOOST_CHECK_EQUAL(metainformation::type<const long double&>::name(),  "const long double&");
    BOOST_CHECK_EQUAL(metainformation::type<const long double&&>::name(), "const long double&&");
    BOOST_CHECK_EQUAL(metainformation::type<const long double*>::name(),  "const long double*");
    BOOST_CHECK_EQUAL(metainformation::type<const long double**>::name(), "const long double**");
}

BOOST_AUTO_TEST_SUITE_END(); // floating_point

BOOST_AUTO_TEST_SUITE(allocator);

BOOST_AUTO_TEST_CASE(character)
{
    BOOST_CHECK_EQUAL(metainformation::type<std::allocator<char>>::name(), "std::allocator<char>");
}

BOOST_AUTO_TEST_CASE(integer)
{
    BOOST_CHECK_EQUAL(metainformation::type<std::allocator<int>>::name(), "std::allocator<int>");
}

BOOST_AUTO_TEST_SUITE_END(); //allocator

BOOST_AUTO_TEST_SUITE(string);

BOOST_AUTO_TEST_CASE(char_traits)
{
    BOOST_CHECK_EQUAL(metainformation::type<std::char_traits<char>>::name(), "std::char_traits<char>");
}

BOOST_AUTO_TEST_CASE(basic_string_view)
{
    BOOST_CHECK_EQUAL(
        metainformation::type<std::string_view>::name(),
        "std::basic_string_view<char, std::char_traits<char>>"
    );

    BOOST_CHECK_EQUAL(
        (metainformation::type<std::basic_string_view<char, std::char_traits<char>>>::name()),
        "std::basic_string_view<char, std::char_traits<char>>"
    );
}

BOOST_AUTO_TEST_SUITE_END(); // string
