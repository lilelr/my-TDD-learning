cmake_minimum_required(VERSION 3.7)
project(my_gmock_start)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall")

add_subdirectory(googletest)
include_directories(googlemock/include googletest/include)


set(SOURCE_FILES main.cpp SoundexTest.cpp SoundexFixtureTest.cpp)
add_executable(my_gmock_start ${SOURCE_FILES})
target_link_libraries(my_gmock_start pthread)
target_link_libraries(my_gmock_start gmock)
target_link_libraries(my_gmock_start gtest)