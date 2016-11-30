cmake_minimum_required (VERSION 2.6)
project (HelloWorld)
#set version number
set (HELLO_WORLD_VERSION_MAJOR 1)
set (HELLO_WORLD_VERSION_MINOR 0)

#configure the header file to pass some of the settings to the source code
configure_file (
	"${PROJECT_SOURCE_DIR}/HelloWorldConfig.h.in"
	"${PROJECT_SOURCE_DIR}/HelloWorldConfig.h"
)

include_directories("${PROJECT_SOURCE_DIR}")

add_executable(HelloWorld hello_world.cpp)
add_executable(hello_world hello_world.c)

