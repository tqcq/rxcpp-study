cmake_minimum_required(VERSION 3.25)
project(rxcpp_study)

set(CMAKE_CXX_STANDARD 17)

add_executable(rxcpp_study main.cpp)
target_include_directories(rxcpp_study
        PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/third_party/RxCpp/Rx/v2/src")
