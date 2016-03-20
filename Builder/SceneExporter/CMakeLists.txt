project(SceneExporter)
cmake_minimum_required(VERSION 2.8)

#message("Your CMake version supports these C++ features:")
#get_property(known_features GLOBAL PROPERTY CMAKE_CXX_KNOWN_FEATURES)
#foreach(i ${known_features})
#  message("${i}")
#endforeach()

file(GLOB SOURCES "*.cpp")
file(GLOB HEADERS "*.h")

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

target_compile_features(${PROJECT_NAME} PUBLIC cxx_nullptr)
target_compile_features(${PROJECT_NAME} PUBLIC cxx_override)
