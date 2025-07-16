add_executable(TestMath Vector3_Tests.cpp)
target_include_directories(TestMath PRIVATE
	${PROJECT_SOURCE_DIR}/src
	${PROJECT_SOURCE_DIR}/include
)
target_link_libraries(TestMath PRIVATE Math Catch2::Catch2WithMain)
# add_test(NAME MathTests COMMAND TestMath)
include(CTest)
include(Catch)
catch_discover_tests(TestMath)
