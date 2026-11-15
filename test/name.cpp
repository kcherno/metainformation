#define BOOST_TEST_MODULE name

#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>

#include "name.hpp"

BOOST_AUTO_TEST_CASE(boolean)
{
    BOOST_CHECK_EQUAL(metainformation::name<bool>(), "bool");

    BOOST_CHECK_EQUAL(metainformation::name<const bool>(), "const bool");

    BOOST_CHECK_EQUAL(metainformation::name<bool&>(), "bool&");

    BOOST_CHECK_EQUAL(metainformation::name<const bool&>(), "const bool&");

    BOOST_CHECK_EQUAL(metainformation::name<bool&&>(), "bool&&");

    BOOST_CHECK_EQUAL(metainformation::name<const bool&&>(), "const bool&&");
}

BOOST_AUTO_TEST_CASE(character)
{
    BOOST_CHECK_EQUAL(metainformation::name<char>(), "char");

    BOOST_CHECK_EQUAL(metainformation::name<const char>(), "const char");

    BOOST_CHECK_EQUAL(metainformation::name<char&>(), "char&");

    BOOST_CHECK_EQUAL(metainformation::name<const char&>(), "const char&");

    BOOST_CHECK_EQUAL(metainformation::name<char&&>(), "char&&");

    BOOST_CHECK_EQUAL(metainformation::name<const char&&>(), "const char&&");
}

BOOST_AUTO_TEST_SUITE(integer);

BOOST_AUTO_TEST_CASE(s)
{
    BOOST_CHECK_EQUAL(metainformation::name<short>(), "signed short int");

    BOOST_CHECK_EQUAL(metainformation::name<const short>(), "const signed short int");

    BOOST_CHECK_EQUAL(metainformation::name<short&>(), "signed short int&");

    BOOST_CHECK_EQUAL(metainformation::name<const short&>(), "const signed short int&");

    BOOST_CHECK_EQUAL(metainformation::name<short&&>(), "signed short int&&");

    BOOST_CHECK_EQUAL(metainformation::name<const short&&>(), "const signed short int&&");

    BOOST_CHECK_EQUAL(metainformation::name<unsigned short>(), "unsigned short int");

    BOOST_CHECK_EQUAL(metainformation::name<const unsigned short>(), "const unsigned short int");

    BOOST_CHECK_EQUAL(metainformation::name<unsigned short&>(), "unsigned short int&");

    BOOST_CHECK_EQUAL(metainformation::name<const unsigned short&>(), "const unsigned short int&");

    BOOST_CHECK_EQUAL(metainformation::name<unsigned short&&>(), "unsigned short int&&");

    BOOST_CHECK_EQUAL(metainformation::name<const unsigned short&&>(), "const unsigned short int&&");
}

BOOST_AUTO_TEST_CASE(i)
{
    BOOST_CHECK_EQUAL(metainformation::name<int>(), "signed int");

    BOOST_CHECK_EQUAL(metainformation::name<const int>(), "const signed int");

    BOOST_CHECK_EQUAL(metainformation::name<int&>(), "signed int&");

    BOOST_CHECK_EQUAL(metainformation::name<const int&>(), "const signed int&");

    BOOST_CHECK_EQUAL(metainformation::name<int&&>(), "signed int&&");

    BOOST_CHECK_EQUAL(metainformation::name<const int&&>(), "const signed int&&");

    BOOST_CHECK_EQUAL(metainformation::name<unsigned int>(), "unsigned int");

    BOOST_CHECK_EQUAL(metainformation::name<const unsigned int>(), "const unsigned int");

    BOOST_CHECK_EQUAL(metainformation::name<unsigned int&>(), "unsigned int&");

    BOOST_CHECK_EQUAL(metainformation::name<const unsigned int&>(), "const unsigned int&");

    BOOST_CHECK_EQUAL(metainformation::name<unsigned int&&>(), "unsigned int&&");

    BOOST_CHECK_EQUAL(metainformation::name<const unsigned int&&>(), "const unsigned int&&");
}

BOOST_AUTO_TEST_CASE(l)
{
    BOOST_CHECK_EQUAL(metainformation::name<long>(), "signed long int");

    BOOST_CHECK_EQUAL(metainformation::name<const long>(), "const signed long int");

    BOOST_CHECK_EQUAL(metainformation::name<long&>(), "signed long int&");

    BOOST_CHECK_EQUAL(metainformation::name<const long&>(), "const signed long int&");

    BOOST_CHECK_EQUAL(metainformation::name<long&&>(), "signed long int&&");

    BOOST_CHECK_EQUAL(metainformation::name<const long&&>(), "const signed long int&&");

    BOOST_CHECK_EQUAL(metainformation::name<unsigned long>(), "unsigned long int");

    BOOST_CHECK_EQUAL(metainformation::name<const unsigned long>(), "const unsigned long int");

    BOOST_CHECK_EQUAL(metainformation::name<unsigned long&>(), "unsigned long int&");

    BOOST_CHECK_EQUAL(metainformation::name<const unsigned long&>(), "const unsigned long int&");

    BOOST_CHECK_EQUAL(metainformation::name<unsigned long&&>(), "unsigned long int&&");

    BOOST_CHECK_EQUAL(metainformation::name<const unsigned long&&>(), "const unsigned long int&&");
}

BOOST_AUTO_TEST_CASE(ll)
{
    BOOST_CHECK_EQUAL(metainformation::name<long long>(), "signed long long int");

    BOOST_CHECK_EQUAL(metainformation::name<const long long>(), "const signed long long int");

    BOOST_CHECK_EQUAL(metainformation::name<long long&>(), "signed long long int&");

    BOOST_CHECK_EQUAL(metainformation::name<const long long&>(), "const signed long long int&");

    BOOST_CHECK_EQUAL(metainformation::name<long long&&>(), "signed long long int&&");

    BOOST_CHECK_EQUAL(metainformation::name<const long long&&>(), "const signed long long int&&");

    BOOST_CHECK_EQUAL(metainformation::name<unsigned long long>(), "unsigned long long int");

    BOOST_CHECK_EQUAL(metainformation::name<const unsigned long long>(), "const unsigned long long int");

    BOOST_CHECK_EQUAL(metainformation::name<unsigned long long&>(), "unsigned long long int&");

    BOOST_CHECK_EQUAL(metainformation::name<const unsigned long long&>(), "const unsigned long long int&");

    BOOST_CHECK_EQUAL(metainformation::name<unsigned long long&&>(), "unsigned long long int&&");

    BOOST_CHECK_EQUAL(metainformation::name<const unsigned long long&&>(), "const unsigned long long int&&");
}

BOOST_AUTO_TEST_SUITE_END(); // integer

BOOST_AUTO_TEST_SUITE(floating_point);

BOOST_AUTO_TEST_CASE(f)
{
    BOOST_CHECK_EQUAL(metainformation::name<float>(), "float");

    BOOST_CHECK_EQUAL(metainformation::name<const float>(), "const float");

    BOOST_CHECK_EQUAL(metainformation::name<float&>(), "float&");

    BOOST_CHECK_EQUAL(metainformation::name<const float&>(), "const float&");

    BOOST_CHECK_EQUAL(metainformation::name<float&&>(), "float&&");

    BOOST_CHECK_EQUAL(metainformation::name<const float&&>(), "const float&&");
}

BOOST_AUTO_TEST_CASE(d)
{
    BOOST_CHECK_EQUAL(metainformation::name<double>(), "double");

    BOOST_CHECK_EQUAL(metainformation::name<const double>(), "const double");

    BOOST_CHECK_EQUAL(metainformation::name<double&>(), "double&");

    BOOST_CHECK_EQUAL(metainformation::name<const double&>(), "const double&");

    BOOST_CHECK_EQUAL(metainformation::name<double&&>(), "double&&");

    BOOST_CHECK_EQUAL(metainformation::name<const double&&>(), "const double&&");
}

BOOST_AUTO_TEST_CASE(ld)
{
    BOOST_CHECK_EQUAL(metainformation::name<long double>(), "long double");

    BOOST_CHECK_EQUAL(metainformation::name<const long double>(), "const long double");

    BOOST_CHECK_EQUAL(metainformation::name<long double&>(), "long double&");

    BOOST_CHECK_EQUAL(metainformation::name<const long double&>(), "const long double&");

    BOOST_CHECK_EQUAL(metainformation::name<long double&&>(), "long double&&");

    BOOST_CHECK_EQUAL(metainformation::name<const long double&&>(), "const long double&&");
}

BOOST_AUTO_TEST_SUITE_END(); // floating_point
