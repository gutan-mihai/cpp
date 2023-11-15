cmake_minimum_required(VERSION 3.22)

# В данном случае указываем язык CXX (а это значит C++),
# чтобы CMake не напрягался и не искал компилятор языка C
# (по умолчанию в CMake включены два языка: C и C++).
project(learning VERSION 1.0 LANGUAGES CXX)

# Здесь же можно сразу проверить, включён ли наш проект в другой проект в качестве подпроекта.
# Это сильно поможет в дальнейшем.
get_directory_property(IS_SUBPROJECT PARENT_DIRECTORY)

set(CMAKE_CXX_STANDARD 20)
set(SOURCE_OUTPUT main.cpp)
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -v") # -v flag for verbose

# Add Utils library
add_library(utils_lib STATIC ${PROJECT_SOURCE_DIR}/utils/utils.cpp)
target_include_directories(utils_lib PUBLIC ${PROJECT_SOURCE_DIR}/utils/include)

# Main project
add_executable(main ${SOURCE_OUTPUT})
target_include_directories(main PRIVATE ${PROJECT_SOURCE_DIR}/utils/include)

# Link the Utils library to the main project
target_link_libraries(main utils_lib)