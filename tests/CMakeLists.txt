find_package(Catch2 REQUIRED)
add_executable(TestMath Vector3_Tests.cpp)
target_link_libraries(TestMath PRIVATE Math Catch2::Catch2)
add_test(NAME MathTests COMMAND TestMath)
