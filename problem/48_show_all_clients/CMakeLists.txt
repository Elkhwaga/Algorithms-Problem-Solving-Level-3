add_executable(show_all_clients src/main.cpp)

target_link_libraries(show_all_clients client fileHandler display)
