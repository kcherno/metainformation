find_package(Boost REQUIRED COMPONENTS unit_test_framework)

add_executable(name name.cpp)

target_link_libraries(name PRIVATE Boost::unit_test_framework)

target_sources(name PRIVATE FILE_SET HEADERS BASE_DIRS ${PROJECT_SOURCE_DIR})

add_test(NAME name COMMAND name --log_level=all)
