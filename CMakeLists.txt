cmake_minimum_required(VERSION 3.10)

# Set the project name
project(MainProject)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directories
include_directories(src/include)

# Add library directories
link_directories(src/lib)

# Add the executable
add_executable(main main.cpp)

# Link libraries
target_link_libraries(main mingw32 SDL2main SDL2)
