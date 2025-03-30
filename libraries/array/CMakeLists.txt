add_library(array STATIC
    src/array.cpp
    src/ArrayDisplay.cpp
)

target_include_directories(array PUBLIC include)
target_include_directories(array PUBLIC ../constant/include)

target_link_libraries(array input enums)