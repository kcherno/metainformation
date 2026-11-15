#pragma once

#include <string_view>

namespace metainformation
{
    template<typename T>
    inline consteval std::string_view name() noexcept = delete;

    // bool

    template<>
    inline consteval std::string_view name<bool>() noexcept
    {
        return "bool";
    }

    template<>
    inline consteval std::string_view name<const bool>() noexcept
    {
        return "const bool";
    }

    template<>
    inline consteval std::string_view name<bool&>() noexcept
    {
        return "bool&";
    }

    template<>
    inline consteval std::string_view name<const bool&>() noexcept
    {
        return "const bool&";
    }

    template<>
    inline consteval std::string_view name<bool&&>() noexcept
    {
        return "bool&&";
    }

    template<>
    inline consteval std::string_view name<const bool&&>() noexcept
    {
        return "const bool&&";
    }

    // char

    template<>
    inline consteval std::string_view name<char>() noexcept
    {
        return "char";
    }

    template<>
    inline consteval std::string_view name<const char>() noexcept
    {
        return "const char";
    }

    template<>
    inline consteval std::string_view name<char&>() noexcept
    {
        return "char&";
    }

    template<>
    inline consteval std::string_view name<const char&>() noexcept
    {
        return "const char&";
    }

    template<>
    inline consteval std::string_view name<char&&>() noexcept
    {
        return "char&&";
    }

    template<>
    inline consteval std::string_view name<const char&&>() noexcept
    {
        return "const char&&";
    }

    // short

    template<>
    inline consteval std::string_view name<signed short int>() noexcept
    {
        return "signed short int";
    }

    template<>
    inline consteval std::string_view name<const signed short int>() noexcept
    {
        return "const signed short int";
    }

    template<>
    inline consteval std::string_view name<signed short int&>() noexcept
    {
        return "signed short int&";
    }

    template<>
    inline consteval std::string_view name<const signed short int&>() noexcept
    {
        return "const signed short int&";
    }

    template<>
    inline consteval std::string_view name<signed short int&&>() noexcept
    {
        return "signed short int&&";
    }

    template<>
    inline consteval std::string_view name<const signed short int&&>() noexcept
    {
        return "const signed short int&&";
    }

    template<>
    inline consteval std::string_view name<unsigned short int>() noexcept
    {
        return "unsigned short int";
    }

    template<>
    inline consteval std::string_view name<const unsigned short int>() noexcept
    {
        return "const unsigned short int";
    }

    template<>
    inline consteval std::string_view name<unsigned short int&>() noexcept
    {
        return "unsigned short int&";
    }

    template<>
    inline consteval std::string_view name<const unsigned short int&>() noexcept
    {
        return "const unsigned short int&";
    }

    template<>
    inline consteval std::string_view name<unsigned short int&&>() noexcept
    {
        return "unsigned short int&&";
    }

    template<>
    inline consteval std::string_view name<const unsigned short int&&>() noexcept
    {
        return "const unsigned short int&&";
    }

    // int

    template<>
    inline consteval std::string_view name<signed int>() noexcept
    {
        return "signed int";
    }

    template<>
    inline consteval std::string_view name<const signed int>() noexcept
    {
        return "const signed int";
    }

    template<>
    inline consteval std::string_view name<signed int&>() noexcept
    {
        return "signed int&";
    }

    template<>
    inline consteval std::string_view name<const signed int&>() noexcept
    {
        return "const signed int&";
    }

    template<>
    inline consteval std::string_view name<signed int&&>() noexcept
    {
        return "signed int&&";
    }

    template<>
    inline consteval std::string_view name<const signed int&&>() noexcept
    {
        return "const signed int&&";
    }

    template<>
    inline consteval std::string_view name<unsigned int>() noexcept
    {
        return "unsigned int";
    }

    template<>
    inline consteval std::string_view name<const unsigned int>() noexcept
    {
        return "const unsigned int";
    }

    template<>
    inline consteval std::string_view name<unsigned int&>() noexcept
    {
        return "unsigned int&";
    }

    template<>
    inline consteval std::string_view name<const unsigned int&>() noexcept
    {
        return "const unsigned int&";
    }

    template<>
    inline consteval std::string_view name<unsigned int&&>() noexcept
    {
        return "unsigned int&&";
    }

    template<>
    inline consteval std::string_view name<const unsigned int&&>() noexcept
    {
        return "const unsigned int&&";
    }

    // long

    template<>
    inline consteval std::string_view name<signed long int>() noexcept
    {
        return "signed long int";
    }

    template<>
    inline consteval std::string_view name<const signed long int>() noexcept
    {
        return "const signed long int";
    }

    template<>
    inline consteval std::string_view name<signed long int&>() noexcept
    {
        return "signed long int&";
    }

    template<>
    inline consteval std::string_view name<const signed long int&>() noexcept
    {
        return "const signed long int&";
    }

    template<>
    inline consteval std::string_view name<signed long int&&>() noexcept
    {
        return "signed long int&&";
    }

    template<>
    inline consteval std::string_view name<const signed long int&&>() noexcept
    {
        return "const signed long int&&";
    }

    template<>
    inline consteval std::string_view name<unsigned long int>() noexcept
    {
        return "unsigned long int";
    }

    template<>
    inline consteval std::string_view name<const unsigned long int>() noexcept
    {
        return "const unsigned long int";
    }

    template<>
    inline consteval std::string_view name<unsigned long int&>() noexcept
    {
        return "unsigned long int&";
    }

    template<>
    inline consteval std::string_view name<const unsigned long int&>() noexcept
    {
        return "const unsigned long int&";
    }

    template<>
    inline consteval std::string_view name<unsigned long int&&>() noexcept
    {
        return "unsigned long int&&";
    }

    template<>
    inline consteval std::string_view name<const unsigned long int&&>() noexcept
    {
        return "const unsigned long int&&";
    }

    // long long

    template<>
    inline consteval std::string_view name<signed long long int>() noexcept
    {
        return "signed long long int";
    }

    template<>
    inline consteval std::string_view name<const signed long long int>() noexcept
    {
        return "const signed long long int";
    }

    template<>
    inline consteval std::string_view name<signed long long int&>() noexcept
    {
        return "signed long long int&";
    }

    template<>
    inline consteval std::string_view name<const signed long long int&>() noexcept
    {
        return "const signed long long int&";
    }

    template<>
    inline consteval std::string_view name<signed long long int&&>() noexcept
    {
        return "signed long long int&&";
    }

    template<>
    inline consteval std::string_view name<const signed long long int&&>() noexcept
    {
        return "const signed long long int&&";
    }

    template<>
    inline consteval std::string_view name<unsigned long long int>() noexcept
    {
        return "unsigned long long int";
    }

    template<>
    inline consteval std::string_view name<const unsigned long long int>() noexcept
    {
        return "const unsigned long long int";
    }

    template<>
    inline consteval std::string_view name<unsigned long long int&>() noexcept
    {
        return "unsigned long long int&";
    }

    template<>
    inline consteval std::string_view name<const unsigned long long int&>() noexcept
    {
        return "const unsigned long long int&";
    }

    template<>
    inline consteval std::string_view name<unsigned long long int&&>() noexcept
    {
        return "unsigned long long int&&";
    }

    template<>
    inline consteval std::string_view name<const unsigned long long int&&>() noexcept
    {
        return "const unsigned long long int&&";
    }

    // float

    template<>
    inline consteval std::string_view name<float>() noexcept
    {
        return "float";
    }

    template<>
    inline consteval std::string_view name<const float>() noexcept
    {
        return "const float";
    }

    template<>
    inline consteval std::string_view name<float&>() noexcept
    {
        return "float&";
    }

    template<>
    inline consteval std::string_view name<const float&>() noexcept
    {
        return "const float&";
    }

    template<>
    inline consteval std::string_view name<float&&>() noexcept
    {
        return "float&&";
    }

    template<>
    inline consteval std::string_view name<const float&&>() noexcept
    {
        return "const float&&";
    }

    // double

    template<>
    inline consteval std::string_view name<double>() noexcept
    {
        return "double";
    }

    template<>
    inline consteval std::string_view name<const double>() noexcept
    {
        return "const double";
    }

    template<>
    inline consteval std::string_view name<double&>() noexcept
    {
        return "double&";
    }

    template<>
    inline consteval std::string_view name<const double&>() noexcept
    {
        return "const double&";
    }

    template<>
    inline consteval std::string_view name<double&&>() noexcept
    {
        return "double&&";
    }

    template<>
    inline consteval std::string_view name<const double&&>() noexcept
    {
        return "const double&&";
    }

    // long double

    template<>
    inline consteval std::string_view name<long double>() noexcept
    {
        return "long double";
    }

    template<>
    inline consteval std::string_view name<const long double>() noexcept
    {
        return "const long double";
    }

    template<>
    inline consteval std::string_view name<long double&>() noexcept
    {
        return "long double&";
    }

    template<>
    inline consteval std::string_view name<const long double&>() noexcept
    {
        return "const long double&";
    }

    template<>
    inline consteval std::string_view name<long double&&>() noexcept
    {
        return "long double&&";
    }

    template<>
    inline consteval std::string_view name<const long double&&>() noexcept
    {
        return "const long double&&";
    }
}
