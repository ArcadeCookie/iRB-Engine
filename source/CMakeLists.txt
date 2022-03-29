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

###############
set(GAMEOBJECT)
file(GLOB GAMEOBJECT "libraries/GameObject/*.h" "libraries/GameObject/*.cpp")
add_library(GameObject SHARED ${GAMEOBJECT})
generate_export_header(GameObject)
###############

###############
set(TIME)
file(GLOB TIME "libraries/Time/*.h" "libraries/Time/*.cpp")
add_library(Time SHARED ${TIME})
generate_export_header(Time)
###############

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_BINARY_DIR})

target_link_libraries(${PROJECT_NAME} PUBLIC GameObject)
target_link_libraries(${PROJECT_NAME} PUBLIC Time)