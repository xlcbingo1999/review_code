file(GLOB_RECURSE RAII_src ./src/*.cc)
file(GLOB_RECURSE RAII_header_files ./include/*.h)

add_library(libRAIIchenjw SHARED ${RAII_src} ${RAII_header_files})
target_include_directories(libRAIIchenjw PUBLIC ./include)

add_executable(RAIIchenjw main.cc)
target_link_libraries(RAIIchenjw PUBLIC libRAIIchenjw)

add_executable(dirCheckchenjw src/dirCheck.cc)
target_link_libraries(dirCheckchenjw PUBLIC libRAIIchenjw)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -O3 -g")
