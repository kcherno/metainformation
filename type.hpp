#pragma once

#include <string_view>

namespace metainformation
{
    template<typename T>
    struct type final
    {
        static constexpr std::string_view name() noexcept = delete;
    };

#define DEFINE_METAINFORMATION_FOR_FUNDAMENTAL_TYPE(TYPE, NAME) \
                                                                \
    template<>                                                  \
    struct type<TYPE> final                                     \
    {                                                           \
        static constexpr std::string_view name() noexcept       \
        {                                                       \
            return NAME;                                        \
        }                                                       \
    };                                                          \
                                                                \
    template<>                                                  \
    struct type<TYPE&> final                                    \
    {                                                           \
        static constexpr std::string_view name() noexcept       \
        {                                                       \
            return NAME "&";                                    \
        }                                                       \
    };                                                          \
                                                                \
    template<>                                                  \
    struct type<TYPE&&> final                                   \
    {                                                           \
        static constexpr std::string_view name() noexcept       \
        {                                                       \
            return NAME "&&";                                   \
        }                                                       \
    };                                                          \
                                                                \
    template<>                                                  \
    struct type<TYPE*> final                                    \
    {                                                           \
        static constexpr std::string_view name() noexcept       \
        {                                                       \
            return NAME "*";                                    \
        }                                                       \
    };                                                          \
                                                                \
    template<>                                                  \
    struct type<TYPE**> final                                   \
    {                                                           \
        static constexpr std::string_view name() noexcept       \
        {                                                       \
            return NAME "**";                                   \
        }                                                       \
    };                                                          \
                                                                \
    template<>                                                  \
    struct type<const TYPE> final                               \
    {                                                           \
        static constexpr std::string_view name() noexcept       \
        {                                                       \
            return "const " NAME;                               \
        }                                                       \
    };                                                          \
                                                                \
    template<>                                                  \
    struct type<const TYPE&> final                              \
    {                                                           \
        static constexpr std::string_view name() noexcept       \
        {                                                       \
            return "const " NAME "&";                           \
        }                                                       \
    };                                                          \
                                                                \
    template<>                                                  \
    struct type<const TYPE&&> final                             \
    {                                                           \
        static constexpr std::string_view name() noexcept       \
        {                                                       \
            return "const " NAME "&&";                          \
        }                                                       \
    };                                                          \
                                                                \
    template<>                                                  \
    struct type<const TYPE*> final                              \
    {                                                           \
        static constexpr std::string_view name() noexcept       \
        {                                                       \
            return "const " NAME "*";                           \
        }                                                       \
    };                                                          \
                                                                \
    template<>                                                  \
    struct type<const TYPE**> final                             \
    {                                                           \
        static constexpr std::string_view name() noexcept       \
        {                                                       \
            return "const " NAME "**";                          \
        }                                                       \
    };                                                          \

    DEFINE_METAINFORMATION_FOR_FUNDAMENTAL_TYPE(bool, "bool");

    DEFINE_METAINFORMATION_FOR_FUNDAMENTAL_TYPE(char, "char");

    DEFINE_METAINFORMATION_FOR_FUNDAMENTAL_TYPE(short int, "short int");

    DEFINE_METAINFORMATION_FOR_FUNDAMENTAL_TYPE(unsigned short int, "unsigned short int");

    DEFINE_METAINFORMATION_FOR_FUNDAMENTAL_TYPE(int, "int");

    DEFINE_METAINFORMATION_FOR_FUNDAMENTAL_TYPE(unsigned int, "unsigned int");

    DEFINE_METAINFORMATION_FOR_FUNDAMENTAL_TYPE(long int, "long int");

    DEFINE_METAINFORMATION_FOR_FUNDAMENTAL_TYPE(unsigned long int, "unsigned long int");

    DEFINE_METAINFORMATION_FOR_FUNDAMENTAL_TYPE(long long int, "long long int");

    DEFINE_METAINFORMATION_FOR_FUNDAMENTAL_TYPE(unsigned long long int, "unsigned long long int");

    DEFINE_METAINFORMATION_FOR_FUNDAMENTAL_TYPE(float, "float");

    DEFINE_METAINFORMATION_FOR_FUNDAMENTAL_TYPE(double, "double");

    DEFINE_METAINFORMATION_FOR_FUNDAMENTAL_TYPE(long double, "long double");

#undef DEFINE_METAINFORMATION_FOR_FUNDAMENTAL_TYPE

}

#include <string>

namespace metainformation
{
    template<typename CharT>
    struct type<std::char_traits<CharT>> final
    {
        static std::string name()
        {
            return std::string("std::char_traits<").append(type<CharT>::name()).append(">");
        }
    };

    template<typename CharT, typename Traits>
    struct type<std::basic_string_view<CharT, Traits>> final
    {
        static std::string name()
        {
            return std::string("std::basic_string_view<")
                .append(type<CharT>::name()).append(", ").append(type<Traits>::name()).append(">");
        }
    };
}
