cmake_minimum_required(VERSION 3.10)

# Set the project name
project(MainProject)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directories
include_directories("src/include")

# Add library directories
link_directories("src/lib")

# Add the executable
add_executable(main main.cpp
        src/include/items/inventory.cpp
        src/include/items/item.cpp
        src/include/actors/actor.cpp
        src/include/actors/player.cpp
        src/include/map/map.cpp
        src/include/objects/gameobject.cpp
        src/include/sdl_point_extension/sdl_point_extension.cpp
        src/include/time/time.cpp
        src/include/transform/transform.cpp
        src/include/items/item.cpp
        src/include/actors/enemy.cpp)

# Link libraries
target_link_libraries(main mingw32 SDL2main SDL2)

# Copy SDL DLL to the output directory after building
add_custom_command(TARGET main POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    "${PROJECT_SOURCE_DIR}/SDL2.dll"
    $<TARGET_FILE_DIR:main>)