cmake_minimum_required(VERSION 3.10)
project(EdgeDetection)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenCV REQUIRED)

add_executable(edge_detection main.cpp)

target_link_libraries(edge_detection ${OpenCV_LIBS}) 