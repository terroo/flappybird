cmake_minimum_required(VERSION 3.14)
project(flappybird LANGUAGES CXX)

# Link SFML statically
option(BUILD_SHARED_LIBS OFF)
find_package(SFML 2.6 COMPONENTS graphics REQUIRED)

add_executable(${PROJECT_NAME} main.cpp flappy.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE sfml-graphics)

# Symlink resources folder
set(source "${CMAKE_SOURCE_DIR}/resources")
set(destination "${CMAKE_CURRENT_BINARY_DIR}/resources")
add_custom_command(
    TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E create_symlink ${source} ${destination} 
    DEPENDS ${destination}
    COMMENT "symbolic link resources folder from ${source} => ${destination}"
)
