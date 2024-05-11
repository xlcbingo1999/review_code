file(GLOB_RECURSE basic_src ./src/*.cc)
file(GLOB_RECURSE basic_include ./include/.h)

add_library(libbasic SHARED ${basic_src} ${basic_include})
target_include_directories(libbasic PUBLIC ./include)
target_link_libraries(libbasic PUBLIC pthread)

add_executable(basic main.cc)
target_link_libraries(basic PUBLIC libbasic)