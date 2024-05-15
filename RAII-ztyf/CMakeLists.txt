file(GLOB_RECURSE RAIIztyf_src ./src/*.cc)
file(GLOB_RECURSE RAIIztyf_header_files ./include/*.h)

add_library(libRAIIztyf SHARED ${RAIIztyf_src} ${RAIIztyf_header_files})
target_include_directories(libRAIIztyf PUBLIC ./include)

add_executable(RAIIztyf main.cc)
target_link_libraries(RAIIztyf PUBLIC libRAIIztyf)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -O3 -g")
