add_library(matrix STATIC
    src/matrix.cpp
    src/DisplayMatrix.cpp
    src/CheckMatrix.cpp
)

target_include_directories(matrix PUBLIC include)
target_include_directories(matrix PUBLIC ../constant/include)

target_link_libraries(matrix input)