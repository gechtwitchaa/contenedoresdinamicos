cmake_minimum_required(VERSION 3.26)
project(contenedoresdinamicos)

set(CMAKE_CXX_STANDARD 14)

add_executable(contenedoresdinamicos
        1.cpp)
add_executable(2 2.cpp)
add_executable(3 3.cpp)
add_executable(4 4.cpp)
add_executable(5 5.cpp)
add_executable(6 6.cpp)


project(BoostExample)


set(BOOST_ROOT "6478edfe2f3305127cffe8caf73ea0176c53769f4bf1585be237eb30798c3b8e")

find_package(Boost 1.75.0)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(BoostExample main.cpp)
    target_link_libraries(BoostExample ${Boost_LIBRARIES})
endif()