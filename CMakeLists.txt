cmake_minimum_required(VERSION 3.0)

project(opencraft)

#install raylib
include(FetchContent)
set(FETCHCONTENT_QUIET FALSE)
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
set(BUILD_GAMES    OFF CACHE BOOL "" FORCE) # don't build the supplied example games
FetchContent_Declare(
	raylib
	GIT_REPOSITORY "http://github.com/raysan5/raylib.git"
	GIT_TAG "master"
	GIT_PROGRESS TRUE
)
FetchContent_MakeAvailable(raylib)



file(GLOB SRC ./src/*.c)
add_executable(opencraft ${SRC})
target_include_directories(opencraft PRIVATE include)
target_link_libraries(opencraft PRIVATE raylib)
