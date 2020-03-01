cmake_minimum_required(VERSION 3.10)

# set the project name
project(testing)

find_package(Armadillo REQUIRED)

include_directories(SYSTEM ${ARMADILLO_INCLUDE_DIRS})
list(APPEND LIBS ${ARMADILLO_LIBRARIES})

# add the executable
add_executable(testing testing_armadillo.cpp)
target_link_libraries(testing ${LIBS})
