cmake_minimum_required(VERSION 3.10)
project(ArgCmd)

include_directories(
    PRIVATE
    src/
)

add_library(
    argcmd STATIC
    src/argcmd.c
)

target_include_directories(
    argcmd PUBLIC
    src/include/
)

# ===== TESTING =====
if(NOT DEFINED BUILD_TESTING)
    set(BUILD_TESTING OFF)
endif()

message(STATUS "BUILD_TESTING=${BUILD_TESTING}")

if(BUILD_TESTING)
    include(CTest)

    # Access Test
    add_executable(access_test test/access_test.c)
    target_link_libraries(access_test PRIVATE argcmd)
    add_test(NAME AccessTest COMMAND access_test test 2 3)
endif()

