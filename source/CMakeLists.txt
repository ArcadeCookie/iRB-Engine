cmake_minimum_required(VERSION 3.4)
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
    "iRB_Engine/Time/*.h" "iRB_Engine/Time/*.cpp")
add_library(Engine SHARED ${ENGINE})
generate_export_header(Engine)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_BINARY_DIR})

target_link_libraries(${PROJECT_NAME} PUBLIC Engine)