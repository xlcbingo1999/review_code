file(GLOB_RECURSE RAII_src ./src/*.cc)
file(GLOB_RECURSE RAII_header_files ./include/*.h)

add_library(libRAII SHARED ${RAII_src} ${RAII_header_files})
target_include_directories(libRAII PUBLIC ./include)

add_executable(RAII main.cc)
target_link_libraries(RAII PUBLIC libRAII)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -O3 -g")
