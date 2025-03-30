add_library(enums STATIC src/enums.cpp)

target_include_directories(enums PUBLIC include)

target_link_libraries(enums check)