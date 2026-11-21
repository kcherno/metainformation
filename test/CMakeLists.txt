find_package(Boost REQUIRED COMPONENTS unit_test_framework)

add_executable(type type.cpp)

target_link_libraries(type PRIVATE Boost::unit_test_framework)

target_sources(type PRIVATE FILE_SET HEADERS BASE_DIRS ${PROJECT_SOURCE_DIR})

add_test(NAME type COMMAND type --log_level=all)
