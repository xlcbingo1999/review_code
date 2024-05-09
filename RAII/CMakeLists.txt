file(GLOB_RECURSE RAII_src ./src/*.cc)
file(GLOB_RECURSE RAII_header_files ./include/*.h)

# 构建一个动态库
add_library(libRAII SHARED ${RAII_src} ${RAII_header_files}) # 构建成一个静态链接库 这里是一个依赖
target_include_directories(libRAII PUBLIC ./include)

add_executable(RAII main.cc)
target_link_libraries(RAII PUBLIC libRAII)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -O3 -g")
