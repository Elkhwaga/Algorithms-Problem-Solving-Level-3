add_library(math STATIC
    src/DisplayMath.cpp
    src/InputMath.cpp
)

target_include_directories(math PUBLIC include)

target_link_libraries(math check utils)