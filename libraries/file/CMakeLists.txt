add_library(fileHandler STATIC src/FileHandler.cpp)

target_include_directories(fileHandler PUBLIC include)
target_include_directories(fileHandler PUBLIC ../constant/include)
target_link_libraries(fileHandler client)