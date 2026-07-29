cmake_minimum_required(VERSION 3.16)

project(aaos_sdv_yoriito_adapter)

set(CMAKE_CXX_STANDARD 17)

find_package(yaml-cpp REQUIRED)

add_executable(
    aaos_sdv_adapter

    src/main.cpp
    src/SignalMapper.cpp
    src/SignalRegistry.cpp
    src/SomeIpClient.cpp
    src/SemanticPublisher.cpp
    src/AdapterService.cpp
    src/ConsolePublisher.cpp
)

target_include_directories(
    aaos_sdv_adapter
    PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(
    aaos_sdv_adapter
    yaml-cpp
)