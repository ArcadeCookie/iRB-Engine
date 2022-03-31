cmake_minimum_required(VERSION 3.20)
set(CMAKE_LEGACY_CYGWIN_WIN32 OFF)

project(iRB_Engine C CXX)

if(MSVC)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)
    set(BUILD_SHARED_LIBS TRUE)
endif()
include(GenerateExportHeader)

add_executable(${PROJECT_NAME} "main.cpp")
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)

set(ENGINE)
file(GLOB ENGINE 
    "iRB_Engine/GameObject/*.h" "iRB_Engine/GameObject/*.cpp"
    "iRB_Engine/Time/*.h" "iRB_Engine/Time/*.cpp"
    "iRB_Engine/Graphic/*.h" "iRB_Engine/Graphic/*.cpp")
add_library(Engine SHARED ${ENGINE})
generate_export_header(Engine)

target_link_libraries(${PROJECT_NAME} PRIVATE Engine)

cmake_path(GET CMAKE_SOURCE_DIR PARENT_PATH LIBS_DIR)

target_link_libraries(${PROJECT_NAME} PRIVATE
    "${LIBS_DIR}/libs/glad/opengl3.3/build/Release/glad.lib"
    "${LIBS_DIR}/libs/glfw/build/src/Release/glfw3.lib"
)

target_include_directories(${PROJECT_NAME} PRIVATE
    "${LIBS_DIR}/libs/glad/opengl3.3/source/glad/include"
    "${LIBS_DIR}/libs/glfw/source/glfw/include"
)