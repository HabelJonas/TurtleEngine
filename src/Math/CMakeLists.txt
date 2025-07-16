# create a static library called MyEngineMath
add_library(Math
    Vector3.cpp
    Math.cpp
)

# make headers available to consumers via include/
target_include_directories(Math
    PUBLIC
        ${CMAKE_SOURCE_DIR}/include
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
)

# optionally, link third-party math libs here later (e.g. Eigen)
