add_library(stringLib STATIC
    src/CheckString.cpp
    src/DisplayString.cpp
    src/StringHandler.cpp
    src/StringLib.cpp
)

target_include_directories(stringLib PUBLIC include)

target_link_libraries(stringLib enums)