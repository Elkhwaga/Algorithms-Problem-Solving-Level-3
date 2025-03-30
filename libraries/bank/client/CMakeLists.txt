add_library(client STATIC
    src/client.cpp
    src/DisplayClient.cpp    
)

target_include_directories(client PUBLIC include)
target_link_libraries(client input stringLib fileHandler utils enums)
target_include_directories(client PUBLIC ../../constant/include)