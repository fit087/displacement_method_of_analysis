cmake_minimum_required(VERSION 3.10)

# set the project name
project(stiffness)

find_package(Armadillo REQUIRED)

include_directories(SYSTEM ${ARMADILLO_INCLUDE_DIRS})
list(APPEND LIBS ${ARMADILLO_LIBRARIES})

# add the executable
add_executable(stiffness anest.cc)
target_link_libraries(stiffness ${LIBS})
