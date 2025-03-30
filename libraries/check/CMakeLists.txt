add_library(check STATIC src/check.cpp)

target_include_directories(check PUBLIC include)
target_include_directories(check PUBLIC ../constant/include)

target_link_libraries(check enums)