cmake_minimum_required(VERSION 3.16 FATAL_ERROR)
project(Snake)
add_executable(Snake src/main.cpp)
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )

target_link_libraries(Snake ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )
